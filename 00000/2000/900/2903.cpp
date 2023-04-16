#include <iostream>

int main()
{
    int n, a = 2;
    std::cin >> n;
    while(n--)
        a += a - 1;
    std::cout << a * a;
}