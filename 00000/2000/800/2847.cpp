#include <iostream>

int main()
{
    int n, res = 0, arr[100] = {}, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    for(int i =  n - 1; i > 0; i--)
    {
        if(arr[i] <= arr[i - 1])
        {
            tmp = arr[i - 1] - arr[i] + 1;
            arr[i - 1] -= tmp;
            res += tmp;
        }
    }
    std::cout << res;
}