#include <iostream>

int main()
{
    int t, a = 0, b = 0, c = 0;
    std::cin >> t;
    if(t % 10 != 0)
        std::cout << "-1";
    else
    {
        a = t / 300;
        b = (t % 300) / 60;
        c = ((t % 300) % 60) / 10;
        std::cout << a << " " << b << " " << c; 
    }
}