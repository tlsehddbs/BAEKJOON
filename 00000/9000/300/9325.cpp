#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, s, n, q, p;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int sum = 0;
        std::cin >> s >> n;

        sum += s;
        for(int j = 0; j < n; j++)
        {
            std::cin >> q >> p;
            sum += q * p;
        }
        std::cout << sum << "\n";
    }
}