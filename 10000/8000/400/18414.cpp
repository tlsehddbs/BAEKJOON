#include <iostream>
#include <cmath>

int main()
{
    int x, l, r;
    std::cin >> x >> l >> r;
    if(l <= x && x <= r)
        std::cout << x;
    else
        std::cout << (std::abs(x - l) > std::abs(x - r) ? r : l);
}