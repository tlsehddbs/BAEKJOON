#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::vector<int> x, y;
    std::cin >> n;
    x.resize(n);
    y.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> x[i] >> y[i];
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());
    std::cout << (x[n - 1] - x[0]) * (y[n - 1] - y[0]);
}