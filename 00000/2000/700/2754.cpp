#include <iostream>

int main()
{
    float r = 0;
    std::string s;
    std::cin >> s;

    if(s[0] == 'A') r += 4.0;
    if(s[0] == 'B') r += 3.0;
    if(s[0] == 'C') r += 2.0;
    if(s[0] == 'D') r += 1.0;
    if(s[1] == '+') r += 0.3;
    if(s[1] == '-') r -= 0.3;

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << r;
}