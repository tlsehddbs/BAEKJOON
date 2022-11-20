#include <iostream>
#include <algorithm>

int main()
{
    int scr[4], e, f, res = 0;
    for(int i = 0; i < 4; i++)
        std::cin >> scr[i];
    std::cin >> e >> f;
    std::sort(scr, scr + 4);
    for(int i = 3; i > 0; i--)
        res += scr[i];
    res += std::max(e, f);
    std::cout << res;
}