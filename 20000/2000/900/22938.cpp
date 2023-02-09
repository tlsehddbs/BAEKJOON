#include <iostream>
#include <cmath>

int main()
{
    int x1, y1, r1, x2, y2, r2;
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    std::cout << (std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2)) < r1 + r2 ? "YES" : "NO");
}