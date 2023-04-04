#include <iostream>
#include <algorithm>
#include <vector>

bool comp(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
    return a.first < b.first;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, tmp;
    std::string str;
    std::vector<std::pair<int, std::string>> v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp >> str;
        v.push_back(std::pair(tmp, str));
    }
    std::stable_sort(v.begin(), v.end(), comp);
    for(int i = 0; i < n; i++)
        std::cout << v[i].first << " " << v[i].second << "\n";
}