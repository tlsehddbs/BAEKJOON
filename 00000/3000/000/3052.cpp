#include <iostream>

int main()
{
    int arr[10], remain[42] = {}, cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
        remain[arr[i] % 42]++;
    }
    for(int i = 0; i < 42; i++)
        if(remain[i] > 0)
            cnt++;
    std::cout << cnt;
}