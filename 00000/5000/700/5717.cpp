#include <iostream>

int main()
{
    while(true)
    {
        int m, f;
        std::cin >> m >> f;
        if(m == 0 && f == 0)
            break;
        std::cout << m + f << "\n";
    }
}