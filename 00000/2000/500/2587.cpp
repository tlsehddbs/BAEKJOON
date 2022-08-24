#include <iostream>
#include <algorithm>

int main()
{
    int arr[5], sum = 0;
    for(int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum / 5 << "\n";
    std::sort(arr, arr + 5);
    std::cout << arr[2];
}