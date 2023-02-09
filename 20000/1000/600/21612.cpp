#include <iostream>

int main()
{
    int b, p;
    std::cin >> b;
    p = 5 * b - 400;
    std::cout << p << "\n" << (p == 100 ? 0 : (p < 100 ? 1 : -1));
}