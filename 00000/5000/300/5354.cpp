#include <iostream>

int main()
{
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(j == 0 || j == n - 1 || k == 0 || k == n - 1)
                    std::cout << "#";
                else
                    std::cout << "J";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
}