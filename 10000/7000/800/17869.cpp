#include <iostream>

int main()
{
    long long int n, cnt = 0;
    std::cin >> n;
    while(n != 1)
    {
        n % 2 != 0 ? n += 1 : n /= 2;
        cnt++;
    }
    std::cout << cnt;
}