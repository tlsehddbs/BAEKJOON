#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::cout << n * (m % 10) << "\n" << n * ((m % 100) / 10) << "\n" << n * (m / 100) << "\n" << n * m;
}