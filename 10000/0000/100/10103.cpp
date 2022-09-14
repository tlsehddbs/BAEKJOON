#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, a, b, x = 100, y = 100;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        if(a == b) 
            continue;
        else
            a > b ? y -= a : x -= b;
    }
    std::cout << x << "\n" << y;
}