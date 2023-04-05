#include <iostream>
#include <queue>

int n = 5, a, b, arr[5][5] = {}, vis[5][5] = {}, dist[5][5] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
bool flag = false;
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
			if(cy >= 0 && cx >= 0 && cy < n && cx < n)
				if(arr[cy][cx] != -1 && vis[cy][cx] == 0)
				{
					vis[cy][cx] = 1;
                    dist[cy][cx] = dist[y][x] + 1;
					q.push({ cy, cx });
                    if(arr[cy][cx] == 1)
                    {
                        std::cout << dist[cy][cx];
                        flag = true;
                    }
				}
		}
	}
}

int main()
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    std::cin >> a >> b;
    BFS(a, b);
    if(!flag)
        std::cout << -1;
}