#include <iostream>
#include <queue>

int n, m, w = 0, b = 0, cnt = 0, vis[600][600] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 }, tmpx, tmpy;
char arr[600][600] = {};
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
				if(arr[cy][cx] != 'X' && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
                    if(arr[cy][cx] == 'P')
                        cnt++;
				}
		}
	}
}

int main()
{
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] == 'I')
            {
                tmpx = j;
                tmpy = i;
            }
        }
    BFS(tmpy, tmpx);
    if(cnt == 0)
        std::cout << "TT";
    else
        std::cout << cnt;
}