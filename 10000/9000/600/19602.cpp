#include <iostream>

int main()
{
    int s, m, l;
    std::cin >> s >> m >> l;
    std::cout << (1 * s + 2 * m + 3 * l >= 10 ? "happy" : "sad");
}