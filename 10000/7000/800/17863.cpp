#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    n /= 10000;
    std::cout << (n == 555 ? "YES" : "NO");
}