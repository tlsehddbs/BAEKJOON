#include <iostream>
#include <queue>

int t, w, h, cnt, vis[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[100][100] = {};
std::queue<std::pair<int, int>> q;

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
			if(cy >= 0 && cx >= 0 && cy < h && cx < w) 
				if (arr[cy][cx] == '#' && vis[cy][cx] == 0)
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

    std::cin >> t;
    for(int k = 0; k < t; k++)
    {
        std::cin >> h >> w;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                std::cin >> arr[i][j];
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                if(arr[i][j] == '#' && vis[i][j] == 0)
                {
                    cnt++;
                    BFS(i, j);
                }
        std::cout << cnt << "\n";
        cnt = 0;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                vis[i][j] = 0;
    }
}