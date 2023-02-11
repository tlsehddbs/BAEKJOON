#include <iostream>

int main()
{
    int k, d, a;
    char c;
    std::cin >> k >> c >> d >> c >> a;
    std::cout << ((k + a < d || d == 0) ? "hasu" : "gosu");
}