#include <iostream>

int main()
{
    int arr[8] = {}, sum = 0, min = 101;
    for(int i = 0; i < 7; i++)
    {
        std::cin >> arr[i];
        if(arr[i] % 2 != 0)
        {
            sum += arr[i];
            if(arr[i] < min)
                min = arr[i];
        }
    }
    if(sum == 0) 
        std::cout << "-1";
    else
        std::cout << sum << "\n" << min;
}