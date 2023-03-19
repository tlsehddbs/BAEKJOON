#include <iostream>
#include <queue>
#include <algorithm>

int n, cnt, vis[1000][1000] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[1000][1000] = {};
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
				if(arr[cy][cx] == '*' && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
				}
		}
	}
}

int main()
{
    std::cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(arr[i][j] == '*' && vis[i][j] == 0)
            {
                BFS(i, j);
                cnt++;
            }
    std::cout << cnt;
}