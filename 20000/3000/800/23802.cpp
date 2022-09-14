#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n * 5; i++)
    {
        for(int j = 0; j < n * 5; j++)
            if(i <= n - 1 || j <= n - 1)
                std::cout << "@";
        std::cout << "\n";
    }
}