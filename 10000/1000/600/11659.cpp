#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, arr[100001] = {}, sum[100001] = {}, tmp = 0, s, e;
    std::cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> arr[i];
        tmp += arr[i];
        sum[i] = tmp;
    }
    for(int i =0 ; i < m; i++)
    {
        std::cin >> s >> e;
        std::cout << sum[e] - sum[s - 1] << "\n";
    }
}