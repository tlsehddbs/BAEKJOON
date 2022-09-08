#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, n, res = 0;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        int tmp = 0;
        for(int j = 0; j <= n; j++)
        {
            if(j % 2 != 0)
                tmp += j;
        }
        std::cout << tmp << "\n";
    }
}