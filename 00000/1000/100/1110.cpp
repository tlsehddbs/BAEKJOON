#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int n, tmp, cnt = 0;
    std::cin >> n;
    tmp = n;
    while(true)
    {
        tmp = (tmp % 10) * 10 + ((tmp / 10) + (tmp % 10)) % 10;
        cnt++;
        if(n == tmp)
            break;
    }
    std::cout << cnt;
}