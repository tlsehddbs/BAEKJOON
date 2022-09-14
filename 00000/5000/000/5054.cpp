#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, n, arr[21] = {};
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int min = 100, max = -1;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[j];
            if(arr[j] > max) max = arr[j];
            if(arr[j] < min) min = arr[j];
        }
        std::cout << (max - min) * 2 << "\n";
    }
}