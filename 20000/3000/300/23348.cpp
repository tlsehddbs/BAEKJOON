#include <iostream>

int main()
{
    int a, b, c, n, ia, ib, ic, max = 0, tmp;
    std::cin >> a >> b >> c >> n;
    for(int i = 0; i < n; i++)
    {
        tmp = 0;
        for(int j = 0; j < 3; j++)
        {
            std::cin >> ia >> ib >> ic;
            tmp += a * ia + b * ib + c * ic;
        }
        if(tmp > max)
            max = tmp;
    }
    std::cout << max;
}