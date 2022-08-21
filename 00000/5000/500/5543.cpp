#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int arr[6], bp = 2001, dp = 2001;
    
    for(int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
        if(bp > arr[i])
            bp = arr[i];
    }

    for(int i = 3; i < 5; i++)
    {
        std::cin >> arr[i];
        if(dp > arr[i])
            dp = arr[i];
    }

    std::cout << bp + dp - 50;
}