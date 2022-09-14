#include <iostream>

int main()
{
    int n, k, arr[10], cnt = 0;
    std::cin >> n >> k;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    while(k != 0)
    {
        int i = n - 1;
        if(k >= arr[i])
        {
            k -= arr[i];
            cnt++;
        }
        else
            n--;
    }
    std::cout << cnt;
}