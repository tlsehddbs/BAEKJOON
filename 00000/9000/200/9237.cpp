#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, tmp, max = 0;
    std::vector<int> v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++)
    {
        v[i] += i;
        max = v[i] > max ? v[i] : max; 
    }
    std::cout << max + 2;
}