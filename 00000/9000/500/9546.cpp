#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int r = 1, n;
        std::cin >> n;
        for(int j = 1; j < n; j++)
            r = r * 2 + 1;
        std::cout << r << "\n";
    }
}