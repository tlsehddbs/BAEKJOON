#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (a + d >= b + c ? b + c : a + d);
}