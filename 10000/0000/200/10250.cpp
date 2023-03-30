#include <iostream>

int main()
{
    int t, h, w, n;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> h >> w >> n;
        std::cout << (n % h == 0 ? h : n % h) * 100 + n / h + (n % h == 0 ? 0 : 1) << "\n";
    }
}