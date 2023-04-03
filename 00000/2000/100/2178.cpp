#include <iostream>
#include <queue>

int n, m, vis[100][100] = {}, dist[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[100][100] = {};
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
		for(int i = 0; i < 4; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if(cy >= 0 && cx >= 0 && cy < n && cx < m) 
				if(arr[cy][cx] == '1' && vis[cy][cx] == 0)
				{
					vis[cy][cx] = 1;
                    dist[cy][cx] = dist[y][x] + 1;
					q.push({ cy, cx });
				}
		}
	}
}

int main()
{
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> arr[i][j];
    BFS(0, 0);
    std::cout << dist[n - 1][m - 1] + 1;
}