#include <iostream>
#include <algorithm>

int main()
{
    int t, arr[5];
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 5; j++)
            std::cin >> arr[j];
        std::sort(arr, arr + 5);
        if(arr[3] - 4 >= arr[1])
            std::cout << "KIN\n";
        else
            std::cout << arr[1] + arr[2] + arr[3] << "\n";
    }
}