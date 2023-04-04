#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int c, arr[1001];
    std::cin >> c;
    for(int i = 0; i < c; i++)
    {
        int n, cnt = 0;
        float sum = 0;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[j];
            sum += arr[j];
        }
        for(int j = 0; j < n; j++)
            if(arr[j] > (sum / n))
                cnt++;
        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << (float)cnt / n * 100 << "%\n";
    }
}