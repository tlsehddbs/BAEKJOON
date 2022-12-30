#include <iostream>

int main()
{
    int r, s, res;
    std::cin >> r >> s;
    res = r * 8 + s * 3 - 28;
    std::cout << (res < 0 ? 0 : res);
}