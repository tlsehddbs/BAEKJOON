#include <iostream>

int main()
{
    int n, k, arr[1001] = {}, cnt = 0;
    std::cin >> n >> k;
    for(int i = 2; i <= n; i++)
        for(int j = i; j <= n; j += i)
        {
            if(arr[j] == 0)
            {
                arr[j] = 1;
                cnt++;
            }
            if(cnt == k)
            {
                std::cout << j;
                return 0;
            }
        }
}