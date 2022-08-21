#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, x, a;
    std::cin >> n >> x;

    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        if(a < x)
            std::cout << a << " ";
    }
}