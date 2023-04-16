#include <iostream>
#include <queue>

int main()
{
    int t, n, m, imp, cnt;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        cnt = 0;
        std::cin >> n >> m;
        std::priority_queue<int> pq;
        std::queue<std::pair<int, int> > q;
        for(int j = 0; j < n; j++)
        {
            std::cin >> imp;
            q.push({ j, imp });
            pq.push(imp);
        }
        while(!q.empty())
        {
            int idx = q.front().first, val = q.front().second;
            q.pop();
            if(pq.top() == val)
            {
                pq.pop();
                cnt++;
                if(idx == m)
                {
                    std::cout << cnt << "\n";
                    break;
                }
            }
            else
                q.push({ idx, val });
        }
    }
}