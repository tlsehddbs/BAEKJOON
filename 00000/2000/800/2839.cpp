#include <iostream>

int main()
{
    int n, res = 0;
    std::cin >> n;
    while(n >= 0)
    {
        if(n % 5 == 0)
        {
            res += n / 5;
            std::cout << res;
            return 0;
        }
        n -= 3;
        res++;
    }
    std::cout << -1;
}