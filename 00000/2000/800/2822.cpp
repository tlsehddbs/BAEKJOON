#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int s, sum = 0, ans[5] = {};
    std::vector<std::pair<int, int> > v;
    for(int i = 0; i < 8; i++)
    {
        std::cin >> s;
        v.push_back({ s, i + 1 });
    }
    std::sort(v.rbegin(), v.rend());
    for(int i = 0; i < 5; i++)
    {
        sum += v[i].first;
        ans[i] = v[i].second;
    }
    std::sort(ans, ans + 5);
    std::cout << sum << "\n";
    for(int i = 0; i < 5; i++)
        std::cout << ans[i] << " ";
}