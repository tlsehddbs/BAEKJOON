#include <iostream>

int main()
{
    int a, b, c;
    char tmp;
    std::cin >> a >> tmp >> b >> tmp >> c;
    std::cout << (a + b == c ? "YES" : "NO");
}