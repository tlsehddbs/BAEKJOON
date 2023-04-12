#include <iostream>

int main()
{
    double k, d1, d2, r;
    std::cin >> k >> d1 >> d2;
    r = std::abs(d1 - d2) / 2;
    std::cout << k * k - r * r;
}