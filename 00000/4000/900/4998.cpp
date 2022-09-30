#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    double n, m, b;
    while(std::cin >> n >> b >> m)
    {
        int cnt = 0;
        while(n <= m)
        {
            n = n + (n * b / 100);
            cnt++;
        }
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << cnt << "\n";
    }
}