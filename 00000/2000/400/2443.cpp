#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
            std::cout << " ";
        for(int j = n * 2 - i * 2 - 1; j > 0; j--)
            std::cout << "*";
        std::cout << "\n";
    }
}
