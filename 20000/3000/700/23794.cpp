#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i < n + 2; i++)
    {
        for(int j = 0; j < n + 2; j++)
        {
            if(i == 0 || i == n + 1 || j == 0 || j == n + 1)
                std::cout << "@";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}