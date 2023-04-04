#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << (a * (100 - b) / 100 >= 100 ? 0 : 1);
}