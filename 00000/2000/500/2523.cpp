#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n * 2 - 1; i++)
    {
        if(i < n)
            for(int j = 0; j <= i; j++)
                std::cout << "*";
        else
            for(int j = 0; j < n * 2 - i - 1; j++)
                std::cout << "*";
        std::cout << "\n";
    }
}