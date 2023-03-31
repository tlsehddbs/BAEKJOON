#include <iostream>

int f(int a)
{
    int r = 1;
    for(int i = 2; i <= a; i++)
        r *= i;
    return r;
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cout << f(n) / (f(k) * f(n - k));
}