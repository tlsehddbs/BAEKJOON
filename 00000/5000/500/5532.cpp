#include <iostream>

int main()
{
    int l, a, b, c, d, m, k;
    std::cin >> l >> a >> b >> c >> d;
    m = a / c;
    if(a % c != 0)
        m++;
    k = b / d;
    if(b % d != 0)
        k++;
    std::cout << (m > k ? l - m : l - k);
}
