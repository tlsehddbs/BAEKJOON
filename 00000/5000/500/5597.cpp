#include <iostream>

int main()
{
    int arr[31] = {}, tmp;
    for(int i = 1; i < 29; i++)
    {
        std::cin >> tmp;
        arr[tmp]++;
    }
    for(int i = 1; i <= 30; i++)
        if(arr[i] == 0)
            std::cout << i << "\n";
}