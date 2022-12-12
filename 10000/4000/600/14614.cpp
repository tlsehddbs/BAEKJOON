#include <iostream>

int main()
{
    int a, b;
    std::string c;
    std::cin >> a >> b >> c;
    std::cout << ((c[c.length() - 1] - '0') % 2 == 0 ? a : a ^ b);
}