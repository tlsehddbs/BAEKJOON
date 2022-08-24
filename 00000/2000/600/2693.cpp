#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, arr[11] = {};
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 10; j++)
            std::cin >> arr[j];
        std::sort(arr, arr + 10);
        std::cout << arr[7] << "\n";
    }
}