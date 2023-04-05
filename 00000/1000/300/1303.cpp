#include <iostream>
#include <queue>

int n, m, w = 0, b = 0, cnt = 0, vis[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[100][100] = {};
std::queue<std::pair<int, int> > q;

void BFS(int y, int x, char c)
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
			if(cy >= 0 && cx >= 0 && cy < m && cx < n) 
				if(arr[cy][cx] == c && vis[cy][cx] == 0)
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
    std::cin >> n >> m;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(vis[i][j] == 0)
            {
                BFS(i, j, arr[i][j]);
                arr[i][j] == 'W' ? w += cnt * cnt : b += cnt * cnt;
                cnt = 0;
            }
    std::cout << w << " " << b;
}