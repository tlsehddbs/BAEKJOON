#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) ? 1 : 0;
}