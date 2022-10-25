#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int min, over, n, tmp;
    std::cin >> min >> over >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if(tmp <= 1000)
            std::cout << tmp << " " << tmp * min << "\n";
        else
            std::cout << tmp << " " << 6000 + (tmp - 1000) * over << "\n";
    }
}