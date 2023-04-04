#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, sum = 0;
    std::vector<int> a, b;
    std::cin >> n;
    a.resize(n);
    b.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> a[i];
    for(int i = 0; i < n; i++)
        std::cin >> b[i];
    std::sort(a.begin(), a.end());
    std::sort(b.rbegin(), b.rend());
    for(int i = 0 ; i <n; i++)
        sum += a[i] * b[i];
    std::cout << sum;
}