#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if(b < c && c - b != 0)
        std::cout << a / (c - b) + 1;
    else
        std::cout << "-1";
}