#include <iostream>

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::cout << gcd(n, m) << "\n" << lcm(n, m);
}