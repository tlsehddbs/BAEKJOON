#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double r;
    std::cin >> r;
    std::cout.precision(6);
    std::cout << std::fixed << r * r * M_PI << "\n" << 2 * r * r;
}