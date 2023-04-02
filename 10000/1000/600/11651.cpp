#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, a, b;
    std::vector<std::pair<int, int> > v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        v.push_back(std::pair(b, a));
    }
    std::sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
        std::cout << v[i].second << " " << v[i].first << "\n";
}