#include <iostream>

int main()
{
    int n, a, h = 0;
    float p = 0, res = 0;
    std::string name, grd;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> name >> a >> grd;
        if(grd[0] == 'A') p += 4.0;
        if(grd[0] == 'B') p += 3.0;
        if(grd[0] == 'C') p += 2.0;
        if(grd[0] == 'D') p += 1.0;
        if(grd[1] == '+') p += 0.3;
        if(grd[1] == '-') p -= 0.3;
        h += a;
        res += p * a;
        p = 0;
    }
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << res / h;
}