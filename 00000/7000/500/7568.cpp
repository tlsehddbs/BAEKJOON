#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, a, b, arr[50] = {};
    std::vector<std::pair<int, int> > v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        v.push_back({ a, b });
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i].first < v[j].first && v[i].second < v[j].second)
                arr[i]++;
    for(int i = 0; i < n; i++)
        std::cout << arr[i] + 1 << " ";
}