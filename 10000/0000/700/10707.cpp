#include <iostream>

int main()
{
    int xb, yb, ybm, yep, p, x, y;
    std::cin >> xb >> yb >> ybm >> yep >> p;
    x = p * xb;
    if(p < ybm)
        y = yb;
    else
        y = yb + (p - ybm) * yep;
    std::cout << std::min(x, y);
}