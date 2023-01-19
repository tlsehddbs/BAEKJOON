#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int n, cnt, vis[25][25] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[25][25] = {};
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
			if (cy >= 0 && cx >= 0 && cy < n && cx < n) 
            {
				if (arr[cy][cx] == '1' && vis[cy][cx] == 0)
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
    std::cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == '1' && vis[i][j] == 0)
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
        std::cout << v[i] << "\n";
}