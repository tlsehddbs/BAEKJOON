#include <iostream>

int main()
{
    long long int n, cnt = 0;
    std::cin >> n;
    while(n != 1)
    {
        if(n % 2 != 0)
            n += 1;
        else
            n /= 2;
        cnt++;
    }
    std::cout << cnt;
}