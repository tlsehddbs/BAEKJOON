#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if(a * (100 - b) / 100 >= 100)
        std::cout << "0";
    else
        std::cout << "1";
}