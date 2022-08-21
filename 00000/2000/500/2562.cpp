#include <iostream>

int main()
{
    int n, arr[10], max = 0, idx = 0;

    for(int i = 1; i < 10; i++)
    {
        std::cin >> arr[i];
        if(arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }

    std::cout << max << "\n" << idx;
}