#include <iostream>

int main()
{
    int a, b, cnt = 0;
    std::cin >> a >> b;
    while(true)
    {
        if(a > b)
        {
            std::cout << -1;
            return 0;
        }
        if(a == b)
        {
            cnt++;
            std::cout << cnt;
            return 0;
        }
        if(b % 10 == 1)
        {
            b--;
            b /= 10;
        }
        else if(b % 2 == 0)
            b /= 2;
        else
        {
            std::cout << -1;
            return 0;
        }
        cnt++;
    }
}