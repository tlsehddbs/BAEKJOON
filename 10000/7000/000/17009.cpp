#include <iostream>

int main()
{
    int a = 0, b = 0, t;
    for(int i = 3; i > 0; i--)
    {
        std::cin >> t;
        a += t * i;
    } 
    for(int i = 3; i > 0; i--)
    {
        std::cin >> t;
        b += t * i;
    }
    std::cout << (a == b ? "T" : a > b ? "A" : "B");
}