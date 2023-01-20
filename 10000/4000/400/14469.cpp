#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, a, b, t = 0;
    std::vector<std::pair<int, int> > v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        v.push_back({ a, b });
    }
    std::sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        if(t <= v[i].first)
            t = v[i].first + v[i].second;
        else
            t += v[i].second;
    }
    std::cout << t;
}