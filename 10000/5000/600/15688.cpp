#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, arr[1000001] = {};
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << "\n";
}