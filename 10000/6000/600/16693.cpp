#include <iostream>
#include <cmath>

int main()
{
    double a1, p1, r1, p2;
    std::cin >> a1 >> p1 >> r1 >> p2;
    std::cout << (a1 / p1 > (r1 * r1 * 3.14159265359) / p2 ? "Slice of pizza" : "Whole pizza");
}