#include <iostream>

int main()
{
    int d1, d2;
    std::cin >> d1 >> d2;
    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << d1 * 2 + (d2 * 3.141592) * 2;
}