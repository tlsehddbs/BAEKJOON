#include <iostream>

int main()
{
    int d, h, m, res;
    std::cin >> d >> h >> m;
    res = (m + h * 60 + d * 60 * 24) - (11 + 11 * 60 + 11 * 60 * 24);
    std::cout << (res < 0 ? -1 : res);
}