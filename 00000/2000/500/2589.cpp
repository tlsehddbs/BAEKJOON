#include <iostream>
#include <queue>

int n, m, max = 0, res, vis[50][50] = {}, dist[50][50] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 }, tmp;
char arr[50][50] = {};
std::queue<std::pair<int, int> > q;

int BFS(int y, int x)
{
    dist[y][x] = 1;
	vis[y][x] = 1;
	q.push({ y, x });
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
				if(arr[cy][cx] == 'L' && vis[cy][cx] == 0)
				{
					vis[cy][cx] = 1;
                    dist[cy][cx] = dist[y][x] + 1;
					q.push({ cy, cx });
                    if(max < dist[cy][cx])
                        max = dist[cy][cx];
				}
		}
	}
    return max - 1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == 'L')
            {
                tmp = BFS(i, j);
                if(tmp > res)
                    res = tmp;
                for(int k = 0; k < n; k++)
                    for(int l = 0; l < m; l++)
                    {
                        vis[k][l] = 0;
                        dist[k][l] = 0;
                    }
                max = 0;
            }
    std::cout << res;
}