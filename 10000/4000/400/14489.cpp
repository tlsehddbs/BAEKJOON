#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a + b < 2 * c ? a + b : a + b - 2 * c);
}