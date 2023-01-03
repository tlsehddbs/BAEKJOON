#include <iostream>

int main()
{
    int n;
    for(int i = 0; i < 8; i++)
    {
        std::cin >> n;
        if(n > 1)
        {
            std::cout << "F";
            return 0;
        }
    }
    std::cout << "S";
}