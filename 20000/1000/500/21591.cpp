#include <iostream>

int main()
{
    int wl, hl, ws, hs;
    std::cin >> wl >> hl >> ws >> hs;
    std::cout << (wl - 2 >= ws && hl - 2 >= hs ? 1 : 0);
}