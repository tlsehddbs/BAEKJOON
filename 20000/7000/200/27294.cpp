#include <iostream>

int main()
{
    int t, s;
    std::cin >> t >> s;
    std::cout << (s == 1 || !(11 < t && t < 17) ? 280 : 320);
}