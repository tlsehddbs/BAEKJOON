#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if(a == 60 && b == 60 && c == 60)
        std::cout << "Equilateral";
    else if(a + b + c == 180 && a == b || a == c || b == c)
        std::cout << "Isosceles";
    else if(a + b + c == 180)
        std::cout << "Scalene";
    else
        std::cout << "Error";
}