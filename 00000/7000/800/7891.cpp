#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, x, y;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> x >> y;
        std::cout << x + y << "\n";
    }
}