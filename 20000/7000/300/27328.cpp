#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << (a == b ? 0 : (a < b ? -1 : 1));
}