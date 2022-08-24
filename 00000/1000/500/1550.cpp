#include <iostream>

int main()
{
    char d[7] = {};
    std::cin >> d;
    std::cout << (int)std::strtol(d, NULL, 16);
}