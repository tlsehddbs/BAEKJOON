#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, arr[300000] = {};
    float t , ans = 0;
    std::cin >> n;
    if(n == 0)
    {
        std::cout << 0;
        return 0;
    }
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    t = std::round(n * 0.15);
    std::sort(arr, arr + n);
    for(int i = t; i < n - t; i++)
        ans += arr[i];
    std::cout << std::round(ans / (n - t * 2));
}