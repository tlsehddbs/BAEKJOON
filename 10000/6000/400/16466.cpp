#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, arr[1000001] = {}, tmp;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> tmp;
        arr[tmp]++;
    }
    for(int i = 1; i <= n; i++)
        if(arr[i] == 0)
        {
            std::cout << i;
            return 0;
        }
    std::cout << n + 1;
}