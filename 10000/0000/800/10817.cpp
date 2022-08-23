#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arr[4] = {};

    for(int i = 0; i < 3; i++)
        std::cin >> arr[i];

    std::sort(arr, arr + 3);

    std::cout << arr[1];
}