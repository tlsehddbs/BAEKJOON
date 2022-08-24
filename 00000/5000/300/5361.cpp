#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, arr[6] = {};
    float price[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        float sum = 0;
        for(int j = 0; j < 5; j++)
        {
            std::cin >> arr[j];
            sum += arr[j] * price[j];
        }
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << "$" << sum << "\n";
    }
}