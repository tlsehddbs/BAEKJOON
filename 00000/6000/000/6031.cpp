#include <iostream>
#include <queue>
#include <algorithm>

int w, h, cnt, max = 0, vis[750][750] = {}, px[8] = { -1, -1, 0, 1, 1, 1, 0, -1 }, py[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
char arr[750][750] = {};
std::queue<std::pair<int, int>> q;

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
		for(int i = 0; i < 8; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if(cy >= 0 && cx >= 0 && cy < h && cx < w) 
            {
				if(arr[cy][cx] == '.' && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
					cnt++;
				}
			}
		}
	}
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> w >> h;
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            if(arr[i][j] == '.' && vis[i][j] == 0)
            {
                BFS(i, j);
                if(cnt > max)
                    max = cnt;
                cnt = 0;
            }
    std::cout << max;
}