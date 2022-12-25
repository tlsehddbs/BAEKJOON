#include <iostream>

int main()
{
    int n, t, cnt = 0, a = 1;
    std::cin >> n >> t;
    for(int i = 0; i < t; i++)
    {
        cnt += a;
        if(cnt == 2 * n)
            a = -1;
        if(cnt == 1)
            a = 1;
    }
    std::cout << cnt;
}