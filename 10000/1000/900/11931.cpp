#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, arr[1000000] = {};
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr, arr + n, std::greater<int>());
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << "\n";
}