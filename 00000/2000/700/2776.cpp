#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, n, m;
    std::string num;
    std::vector<std::string> v;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        for(int i = 0; i < n; i++)
        {
            std::cin >> num;
            v.push_back(num);
        }
        std::sort(v.begin(), v.end());
        std::cin >> m;
        for(int i = 0; i < m; i++)
        {
            std::cin >> num;
            std::cout << std::binary_search(v.begin(), v.end(), num) << "\n";
        }
        v.clear();
    }
}