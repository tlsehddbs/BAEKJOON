#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    std::cout << (x <= y ? y - x : x + y);
}