#include <iostream>

int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;
    std::cout << (a == b ? "Anything" : (a < b ? "Bus" : "Subway"));
}