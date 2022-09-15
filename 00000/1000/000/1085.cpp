#include <iostream>

int main()
{
    int x, y, w, h, yh, xw;
    std::cin >> x >> y >> w >> h;
    w - x > x ? xw = x : xw = w - x;
    h - y > y ? yh = y : yh = h - y;
    std::cout << (xw > yh ? yh : xw);
}