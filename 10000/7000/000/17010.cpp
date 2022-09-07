#include <iostream>

int main()
{
    int l, n;
    char c;
    std::cin >> l;
    for(int i = 0; i < l; i++)
    {
        std::cin >> n >> c;
        for(int j = 0; j < n; j++)
            std::cout << c;
        std::cout << "\n";
    }
}