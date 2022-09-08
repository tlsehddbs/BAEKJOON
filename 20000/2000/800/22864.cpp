#include <iostream>

int main()
{
    int a, b, c, m, cnt = 0, res = 0;
    std::cin >> a >> b >> c >> m;
    if(a > m)
        std::cout << 0;
    else
    {
        for(int i = 0; i < 24; i++)
        {
            if(cnt + a <= m)
            {
                res += b;
                cnt += a;
            }
            else
            {
                if(cnt - c >= 0)
                    cnt -= c;
                else 
                    cnt = 0;
            }
        }
        std::cout << res;
    }
}