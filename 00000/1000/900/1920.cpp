#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, tmp;
    std::vector<int> v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        v.push_back(tmp); 
    }
    std::sort(v.begin(), v.end());
    std::cin >> m;
    for(int i = 0; i < m; i++)
    {
        std::cin >> tmp;
        std::cout << std::binary_search(v.begin(), v.end(), tmp) << "\n";
    }
}