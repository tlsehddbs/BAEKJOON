#include <iostream>
#include <cmath>

int main()
{
    double a, b, m;
    std::cin >> a >> b;
    m = (b - a) / 400;
    std::cout << std::fixed;
    std::cout.precision(20);
    std::cout << 1 / (1 + std::pow(10, m)); 
}