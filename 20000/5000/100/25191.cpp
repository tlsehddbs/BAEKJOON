#include <iostream>

int main()
{
    int n, c, b;
    std::cin >> n >> c >> b;
    std::cout << (n > c / 2 + b ? c / 2 + b : n);
}