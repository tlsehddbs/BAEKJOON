#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, num[101] = {}, res = 0, max = 0;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        std::cin >> num[i];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
            {
                res = num[i] + num[j] + num[k];
                if(res <= m && res > max)
                    max = res;
            }
    std::cout << max;
}