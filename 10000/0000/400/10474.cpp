#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    while(true)
    {
        std::cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        std::cout << n / m << " " << n % m << " / " << m << "\n"; 
    }
}