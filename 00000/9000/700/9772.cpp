#include <iostream>

int main()
{
    float x, y;
    while(std::cin >> x >> y)
    {
        if(x == 0 && y == 0)
        {
            std::cout << "AXIS\n";
            return 0;
        }
        if(x == 0 || y == 0)
        {
            std::cout << "AXIS\n";
            continue;
        }
        std::cout << (x < 0 ? (y < 0 ? "Q3\n" : "Q2\n") : (y < 0 ? "Q4\n" : "Q1\n"));
    }
}