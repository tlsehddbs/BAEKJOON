#include <iostream>

int main()
{
    int n, t;
    std::cin >> t;
    for(int k = 0; k < t; k++)
    {
        bool o = false;
        std::cin >> n;
        std::cout << "Pairs for " << n << ": ";
        for(int i = 1; i <= n; i++)
            for(int j = i + 1; j < n; j++)
            {
                if(i + j == n)
                {
                    if(o)
                        std::cout << ", ";
                    std::cout << i << " " << j;
                    o = true;
                }
            }
        std::cout << "\n";
    }
}