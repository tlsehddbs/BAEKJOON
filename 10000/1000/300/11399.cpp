#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, sum = 0, arr[1001] = {};

    std::cin >> n;

    for(int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::sort(arr, arr + n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j <= i; j++)
            sum += arr[j];

    std::cout << sum;
}