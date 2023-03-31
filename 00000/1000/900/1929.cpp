#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);

    int m, n, arr[1000000] = {};
    std::cin >> m >> n;
    m = m < 2 ? 2 : m;
    for(int i = 2; i <= n; i++)
        for(int j = 2 * i; j <= n; j += i)
            if(arr[j] == 0)
                arr[j] = 1;
    for(int i = m; i <= n; i++)
        if(arr[i] == 0)
            std::cout << i << "\n";
}