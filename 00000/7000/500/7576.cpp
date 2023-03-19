#include <iostream>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, d = 0, arr[1000][1000] = {}, x[4] = { 1, -1, 0, 0 }, y[4] = { 0, 0, 1, -1 }, tmpsize;
    std::queue<std::pair<int, int> > q;
    std::cin >> m >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] == 1)
                q.push({ i, j });
        }
    while(true)
    {
        tmpsize = q.size();
        for(int i = 0; i < tmpsize; i++)
        {
            for(int k = 0; k < 4; k++)
            {
                int ty = q.front().first + y[k], tx = q.front().second + x[k];
                if(ty >= 0 && tx >= 0 && ty < n && tx < m && arr[ty][tx] == 0)
                {
                    q.push({ ty, tx });
                    arr[ty][tx] = 1;
                }
            }
            q.pop();
        }
        if(q.empty())
            break;
        else
            d++;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == 0)
            {
                std::cout << -1;
                return 0;
            }
    std::cout << d;
}