#include <iostream>
#include <queue>

int n, m, k, cnt, max = 0, arr[100][100] = {}, vis[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
std::queue<std::pair<int, int> > q;

void BFS(int y, int x)
{
	q.push({ y, x });
	vis[y][x] = 1;
	cnt++;
	while(!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if(cy >= 0 && cx >= 0 && cy < n && cx < m) 
				if(arr[cy][cx] == 1 && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
					cnt++;
				}
		}
	}
}

int main()
{
    int r, c;
    std::cin >> n >> m >> k;
    for(int i = 0; i < k; i++)
    {
        std::cin >> r >> c;
        arr[r - 1][c - 1] = 1;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == 1 && vis[i][j] == 0)
            {
                BFS(i, j);
                if(cnt > max)
                    max = cnt;
                cnt = 0;
            }
    std::cout  << max;
}