#include <iostream>
#include <queue>
#include <algorithm>

int r, c, yy, xx, vis[1000][1000] = {}, px[4] = { -1, 1, 0, 0 }, py[4] = { 0, 0, -1, 1 };
char arr[1000][1000] = {}, k;
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
			if(cy >= 0 && cx >= 0 && cy < r && cx < c) 
				if(arr[cy][cx] == arr[yy][xx] && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
                    arr[cy][cx] = k;
				}
		}
	}
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            std::cin >> arr[i][j];
    std::cin >> yy >> xx >> k;
    BFS(yy, xx);
    arr[yy][xx] = k;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            std::cout << arr[i][j];
        std::cout << "\n";
    }
}