#include <iostream>
#include <queue>

int n, cnt = 0, max = 0, arr[100][100] = {}, vis[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
std::queue<std::pair<int, int> > q;

void BFS(int y, int x, int h)
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
				if(arr[cy][cx] > h && vis[cy][cx] == 0)
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

    int h = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] > h)
                h = arr[i][j];
        }
    for(int k = 1; k < h; k++)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(arr[i][j] > k && vis[i][j] == 0)
                {
                    cnt++;
                    BFS(i, j, k);
                }
        if(cnt > max)
            max = cnt;
        cnt = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                vis[i][j] = 0;
    }
    std::cout << (max == 0 ? 1 : max);
}