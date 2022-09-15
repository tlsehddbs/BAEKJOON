#include <iostream>

int main()
{
    int n, m, arr[10001], start = 0, end = 0, sum = 0, res = 0;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    while(end <= n)
    {
        if(sum < m)
            sum += arr[end++];
        else if(sum >= m)
            sum -= arr[start++];
        if(sum == m)
            res++;
    }
    std::cout << res;
}