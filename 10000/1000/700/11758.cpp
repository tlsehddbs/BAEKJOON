#include <iostream>

int main()
{
    int x1, y1, x2, y2, x3, y3, res;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    res = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
    if (res == 0)
        std::cout << 0;
    else
        std::cout << (res > 0 ? 1 : -1);
}