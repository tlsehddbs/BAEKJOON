#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << ((a == 8 || a == 9) && b == c && (d == 8 || d == 9) ? "ignore" : "answer");
}