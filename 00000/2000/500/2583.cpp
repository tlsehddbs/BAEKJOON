#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int m, n, k, cnt, arr[100][100] = {}, vis[100][100] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
std::vector<int> v;
std::queue<std::pair<int, int>> q;

void BFS(int y, int x)
{
    q.push({ y, x });
	vis[y][x] = 1;
	cnt++;
	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if (cy >= 0 && cx >= 0 && cy < m && cx < n) 
            {
				if (arr[cy][cx] == 0 && vis[cy][cx] == 0)
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
    int x1, y1, x2, y2;
    std::cin >> m >> n >> k;
    for(int t = 0; t < k; t++)
    {
        std::cin >> x1 >> y1 >> x2 >> y2;
        for(int i = y1; i < y2; i++)
            for(int j = x1; j < x2; j++)
                arr[i][j] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0 && vis[i][j] == 0)
            {
                BFS(i, j);
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    std::sort(v.begin(), v.end());
    std::cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
}