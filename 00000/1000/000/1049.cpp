#include <iostream>

int main()
{
    int n, m, a, b, am = 1000, bm = 1000;
    std::cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        am = a < am ? a : am;
        bm = b < bm ? b : bm;
    }
    std::cout << std::min((n / 6 + 1) * am, std::min(n / 6 * am + n % 6 * bm, n * bm));
}