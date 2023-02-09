#include <iostream>

int main()
{
    int n, t, ans = 0;
    std::cin >> n;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> t;
        ans += t > n ? n : t;
    }
    std::cout << ans;
}