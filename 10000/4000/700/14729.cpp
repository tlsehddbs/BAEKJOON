#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::vector<double> v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    std::cout << std::fixed;
    std::cout.precision(3);
    for(int i = 0; i < 7; i++)
        std::cout << v[i] << "\n";
}