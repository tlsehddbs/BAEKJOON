#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    if(n >= m)
    {
        if(m <= 2)
            std::cout << "NEWBIE!";
        else
            std::cout << "OLDBIE!";
    }
    else
        std::cout << "TLE!";

}