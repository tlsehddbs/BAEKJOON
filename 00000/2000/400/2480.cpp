#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a == b && b == c)
        std::cout << 10000 + a * 1000;
    else if(a == b || a == c)
        std::cout << 1000 + a * 100;
    else if(b == c)
        std::cout << 1000 + b * 100;
    else
        std::cout << std::max(std::max(a, b), c) * 100;
}