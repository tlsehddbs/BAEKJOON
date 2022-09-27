#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int k, p, m, tmp;
    std::cin >> k;
    for(int i = 0; i < k; i++)
    {
        int arr[501] = {}, cnt = 0;
        std::cin >> p >> m;
        for(int j = 1; j <= p; j++)
        {
            std::cin >>  tmp;
            arr[tmp]++;
        }
        for(int j = 1; j <= p; j++)
            if(arr[j] > 1)
                cnt += arr[j] - 1;
        std::cout << cnt << "\n";
    }
}