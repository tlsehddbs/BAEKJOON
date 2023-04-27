#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if(90 <= a)         std::cout << "A\n";
    else if(80 <= a)    std::cout << "B\n";
    else if(70 <= a)    std::cout << "C\n";
    else if(60 <= a)    std::cout << "D\n";
    else                std::cout << "F\n";
}