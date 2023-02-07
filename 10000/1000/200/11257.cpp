#include <iostream>

int main()
{
    int n, m, a, b, c;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> m >> a >> b >> c;
        std::cout << m << " " << a + b + c << " " << (a >= 10.5 && b >= 7.5 && c >= 12 && a + b + c >= 55 ? "PASS\n" : "FAIL\n");
    }
}