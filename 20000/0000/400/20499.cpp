#include <iostream>

int main()
{
    int k, d, a;
    char c;
    std::cin >> k >> c >> d >> c >> a;
    if(k + a < d || d == 0)
        std::cout << "hasu";
    else
        std::cout << "gosu";
}