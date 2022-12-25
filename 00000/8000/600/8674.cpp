#include <iostream>

int main()
{
    long long int a, b;
    std::cin >> a >> b;
    std::cout << (!(a % 2) || !(b % 2) ? 0 : std::min(a, b));
}