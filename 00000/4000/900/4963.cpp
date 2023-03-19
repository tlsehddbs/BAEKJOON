#include <iostream>
#include <vector>
#include <queue>

int w, h, cnt, arr[50][50] = {}, vis[50][50] = {}, px[8] = { -1, -1, 0, 1, 1, 1, 0, -1 }, py[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
std::vector<int> v;
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
		for(int i = 0; i < 8; i++)
		{
			int cy = y + py[i];
			int cx = x + px[i];
			if(cy >= 0 && cx >= 0 && cy < h && cx < w) 
				if(arr[cy][cx] == 1 && vis[cy][cx] == 0)
				{
					q.push({ cy, cx });
					vis[cy][cx] = 1;
				}
		}
	}
}

int main()
{
    while(true)
    {
        std::cin >> w >> h;
        if(w + h == 0)
            break;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                std::cin >> arr[i][j];
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                if(arr[i][j] == 1 && vis[i][j] == 0)
                {
                    cnt++;
                    BFS(i, j);
                }
        v.push_back(cnt);
        cnt = 0;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                vis[i][j] = 0;
    }
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n";
}