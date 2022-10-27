#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, n;
    std::cin >> t;
    std::cout << std::fixed;
    std::cout.precision(1);
    for(int i = 0; i < t; i++)
    {
        int c = 0, tmpc;
        double g = 0, tmpg;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> tmpc >> tmpg;
            c += tmpc;
            g += tmpg * tmpc;
        }
        std::cout << c << " " << g / c << "\n";
    }
}