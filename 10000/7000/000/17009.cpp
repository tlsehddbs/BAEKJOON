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
    if(a == b)
        std::cout << "T";
    else
        std::cout << (a > b ? "A" : "B");
}