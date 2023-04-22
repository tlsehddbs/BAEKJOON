#include <iostream>

int main()
{
    int t, n, dp[42] = { 0, 1, 1 };
    for(int i = 3; i < 41; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        if(n == 0)
            std::cout << "1 0\n";
        else if(n == 1)
            std::cout << "0 1\n";
        else
            std::cout << dp[n - 1] << " " << dp[n] << "\n";
    }
}