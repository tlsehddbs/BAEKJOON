#include <iostream>

int main()
{
    int m, n, arr[10000] = {}, sum = 0, min = 10000;
    std::cin >> m >> n;
    m = m < 2 ? 2 : m;
    for(int i = 2; i <= n; i++)
        for(int j = 2 * i; j <= n; j += i)
            if(arr[j] == 0)
                arr[j] = 1;
    for(int i = m; i <= n; i++)
        if(arr[i] == 0)
        {
            sum += i;
            min = min > i ? i : min;
        }
    if(sum == 0)
    {
        std::cout << -1;
        return 0;
    }
    std::cout << sum << "\n" << min;
}