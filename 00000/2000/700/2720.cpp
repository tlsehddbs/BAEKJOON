#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, c;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int cnt = 0;
        std::cin >> c;
        std::cout << c / 25 << " " << (c % 25) / 10 << " " << ((c % 25) % 10) / 5 << " " << (((c % 25) % 10) % 5) / 1 << "\n";
    }
}