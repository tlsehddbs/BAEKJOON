#include <iostream>

int main()
{
    int m, d;
    std::cin >> m >> d;
    if(m == 2)
    {
        if(d == 18)
            std::cout << "Special";
        else if(d > 18)
            std::cout << "After";
        else
            std::cout << "Before";
    }
    else if(m > 2)
        std::cout << "After";
    else
        std::cout << "Before";
}