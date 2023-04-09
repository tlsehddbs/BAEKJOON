#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::vector<int> v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    std::cout << v[(n - 1) / 2];
}