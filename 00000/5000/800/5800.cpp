#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int k, n, arr[51] = {};
    std::cin >> k;
    for(int i = 0; i < k; i++)
    {
        int min = 100, max = -1, gap = 0;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[j];
            if(arr[j] > max) max = arr[j];
            if(arr[j] < min) min = arr[j];
        }
        std::sort(arr, arr + n);
        for(int j = 0; j < n - 1; j++)
            if(arr[j + 1] - arr[j] > gap)
                gap = arr[j + 1] - arr[j];
        std::cout << "Class " << i + 1 << "\nMax " << max << ", Min " << min << ", Largest gap " << gap << "\n"; 
    }
}