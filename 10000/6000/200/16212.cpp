#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::vector<int> v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
        std::cout << v[i] << " ";
}