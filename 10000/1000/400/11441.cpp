#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, arr[100001] = {}, sum[100001] = {}, s, e, tmp = 0;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> arr[i];
        tmp += arr[i];
        sum[i] = tmp;
    }
    std::cin >> m;
    for(int i = 0; i < m; i++)
    {
        std::cin >> s >> e;
        std::cout << sum[e] - sum[s - 1] << "\n";
    }
}