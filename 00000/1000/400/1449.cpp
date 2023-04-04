#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, l, tmp, cnt = 0;
    std::vector<int> v;
    std::cin >> n >> l;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    tmp = v[0];
    for(int i = 1; i < n; i++)
        if(l <= v[i] - tmp)
        {
            cnt++;
            tmp = v[i];
        }
    std::cout << cnt + 1;
}