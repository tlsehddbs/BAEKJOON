#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << (n / 10000 == 555 ? "YES" : "NO");
}