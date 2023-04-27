#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int a, b, n, tmp;
    std::vector<int> v;
    std::cin >> a >> b >> n;
    v.push_back(std::abs(a - b));
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        v.push_back(std::abs(tmp - b) + 1);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[0];
}