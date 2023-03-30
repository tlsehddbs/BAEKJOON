#include <iostream>
#include <queue>

int n, m, h, d = 0, arr[100][100][100] = {}, x[6] = { 1, -1, 0, 0, 0, 0 }, y[6] = { 0, 0, 1, -1, 0, 0 }, z[6] = { 0, 0, 0, 0, 1, -1 }, tmpsize;
std::queue<std::pair<int, std::pair<int, int> > > q;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> m >> n >> h;
    for(int i = 0; i < h; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
            {
                std::cin >> arr[i][j][k];
                if(arr[i][j][k] == 1)
                    q.push({ i, { j, k } });
            }
    while(true)
    {
        tmpsize = q.size();
        for(int i = 0; i < tmpsize; i++)
        {
            for(int k = 0; k < 6; k++)
            {
                int ty = q.front().second.first + y[k], tx = q.front().second.second + x[k], tz = q.front().first + z[k];
                if(ty >= 0 && tx >= 0 && tz >= 0 && ty < n && tx < m && tz < h && arr[tz][ty][tx] == 0)
                {
                    q.push({ tz, { ty, tx } });
                    arr[tz][ty][tx] = 1;
                }
            }
            q.pop();
        }
        if(q.empty())
            break;
        else
            d++;
    }
    for(int i = 0; i < h; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                if(arr[i][j][k] == 0)
                {
                    std::cout << -1;
                    return 0;
                }
    std::cout << d;
}