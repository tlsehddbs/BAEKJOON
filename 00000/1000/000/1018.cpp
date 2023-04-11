#include <iostream>

int main()
{
    int n, m, cnt, ans = 64;
    char arr[50][50] = {};
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < n - 7; i++)
        for(int j = 0; j < m - 7; j++)
        {
            cnt = 0;
            for(int k = 0; k < 8; k++)
                for(int l = 0; l < 8; l++)
                    if((k % 2 == l % 2 ? 'W' : 'B') == arr[k + i][l + j])
                        cnt++;
            ans = std::min(ans, cnt);
            ans = std::min(ans, 64 - cnt);
        }
    std::cout << ans;
}