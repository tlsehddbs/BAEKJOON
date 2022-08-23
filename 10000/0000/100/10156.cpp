#include <iostream>

int main()
{
    int k, n, m;
    std::cin >> k >> n >> m;
    std::cout << ((k * n - m < 0) ? 0 : k * n - m);
}