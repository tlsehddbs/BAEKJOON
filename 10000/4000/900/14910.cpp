#include <iostream>

int main()
{
    int n, tmp = 0;
    while(std::cin >> n)
    {
        if(n >= tmp)
            continue;
        else
        {
            std::cout << "Bad";
            return 0;
        }
        std::cout << "Good";
    }
}