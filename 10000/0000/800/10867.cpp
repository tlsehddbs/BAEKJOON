#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, tmp = -1;
    std::vector<int> v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(tmp == v[i])
            continue;
        std::cout << v[i] << " ";
        tmp = v[i];
    }
}