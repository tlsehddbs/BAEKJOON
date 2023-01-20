#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, m, tmp, max = 0, p = 0;
    std::vector<int> v;
    std::cin >> n >> m;
    for(int i = 0 ; i < m; i++)
    {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.rbegin(), v.rend());
    for(int i = 0 ; i < n; i++)
    {
        if(v[i] * (i + 1) > max)
        {
            max = v[i] * (i + 1);
            p = v[i];
        }
    }
    std::cout << p << " " << max;
}