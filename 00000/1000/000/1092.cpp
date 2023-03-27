#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, t = 0, tmp;
    std::vector<int> w, b;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        w.push_back(tmp);
    }
    std::cin >> m;
    for(int i = 0; i < m; i++)
    {
        std::cin >> tmp;
        b.push_back(tmp);
    }
    std::sort(w.rbegin(), w.rend());
    std::sort(b.rbegin(), b.rend());
    if(w.front() < b.front())
    {
        std::cout << -1;
        return 0;
    }
    while(!b.empty())
    {
        t++;
        for(int i = 0; i < w.size(); i++)
            for(int j = 0; j < b.size(); j++)
                if(w[i] >= b[j])
                {
                    b.erase(b.begin() + j);
                    break;
                }
    }
    std::cout << t;
}