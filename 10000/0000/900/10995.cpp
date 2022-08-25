#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            std::cout << " ";
        for(int j = 1; j <= n; j++)
            std::cout << "* ";
        std::cout << "\n";
    }
}