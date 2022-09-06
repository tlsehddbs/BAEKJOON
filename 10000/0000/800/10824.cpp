#include <iostream>

int main()
{
    long long int s1, s2;
    std::string a, b, c, d;
    std::cin >> a >> b >> c >> d;
    s1 = std::stoll(a + b);
    s2 = std::stoll(c + d);
    std::cout << s1 + s2;
}