#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k, s, x, y, t = 0, arr[201][201] = {}, xa[4] = { 1, -1, 0, 0 }, ya[4] = { 0, 0, 1, -1 }, tmpsize;
    std::vector<std::pair<int, std::pair<int, int> > > v;
    std::queue<std::pair<int, std::pair<int, int> > > q;
    std::cin >> n >> k;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] != 0)
                v.push_back(std::pair(arr[i][j], std::pair(i, j)));
        }
    std::cin >> s >> x >> y;
    std::sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        q.push(v[i]);
    while(t < s)
    {
        tmpsize = q.size();
        for(int i = 0; i < tmpsize; i++)
        {
            for(int j = 0; j < 4; j++)
                if(q.front().second.first + ya[j] > 0 && q.front().second.first + ya[j] <= n && 
                   q.front().second.second + xa[j] > 0 && q.front().second.second + xa[j] <= n && 
                   arr[q.front().second.first + ya[j]][q.front().second.second + xa[j]] == 0)
                {
                    arr[q.front().second.first + ya[j]][q.front().second.second + xa[j]] = q.front().first;
                    q.push(std::pair(q.front().first, std::pair(q.front().second.first + ya[j], q.front().second.second + xa[j])));
                }
            q.pop();
        }
        t++;
    }
    std::cout << arr[x][y];
}