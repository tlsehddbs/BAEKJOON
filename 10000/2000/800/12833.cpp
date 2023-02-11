#include <iostream>

int main()
{
    int a, b, c, tmp;
    std::cin >> a >> b >> c;
    tmp = c % 2 ? a ^ b : a;
    std::cout << tmp;
}