#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, t, cnt = 1;
    std::vector<std::pair<int, int> > v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i].second >> v[i].first;
    std::sort(v.begin(), v.end());
    t = v[0].first;
    for(int i = 1; i < n; i++)
        if(t <= v[i].second)
        {
            cnt++;
            t = v[i].first;
        }
    std::cout << cnt;
}