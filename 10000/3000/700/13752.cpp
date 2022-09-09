#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, k;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> k;
        for(int j = 0; j < k; j++)
            std::cout << "=";
        std::cout << "\n";
    }
}