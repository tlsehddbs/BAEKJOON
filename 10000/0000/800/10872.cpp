#include <iostream>

int main()
{
    int n, res = 1;
    std::cin >> n;
    if(n == 0)
    {
        std::cout << 1;
        return 0;
    }
    for(int i = 1; i <= n; i++)
        res *= i;
    std::cout << res;
}