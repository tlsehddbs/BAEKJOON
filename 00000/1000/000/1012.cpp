#include <iostream>
#include <queue>

int n, m, k, cnt, arr[50][50] = {}, vis[50][50] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
std::queue<std::pair<int, int> > q;

void BFS(int y, int x)
{
	q.push({ y, x });
	vis[y][x] = 1;
	while(!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if(cy >= 0 && cx >= 0 && cy < n && cx < m) 
				if(arr[cy][cx] == 1 && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
				}
		}
	}
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, r, c;
    std::cin >> t;
    for(int a = 0; a < t; a++)
    {
        std::cin >> m >> n >> k;
        for(int i = 0; i < k; i++)
        {
            std::cin >> r >> c;
            arr[c][r] = 1;
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(arr[i][j] == 1 && vis[i][j] == 0)
                {
                    cnt++;
                    BFS(i, j);
                }
        std::cout << cnt << "\n";
        cnt = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                arr[i][j] = 0;
                vis[i][j] = 0;
            }
    }
}