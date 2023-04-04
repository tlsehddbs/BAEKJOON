#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, sum = 0;
    std::vector<int> v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++)
        if(i % 3 != 2)
            sum += v[i];
    std::cout << sum;
}