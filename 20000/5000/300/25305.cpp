#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, k, a;
    std::vector<int> arr(1001);
    std::cin >> n >> k;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr.rbegin(), arr.rend());
    std::cout << arr[k - 1];
}