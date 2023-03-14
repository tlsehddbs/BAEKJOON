#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        std::cout << (std::abs(((str[0] - 'A') * std::pow(26, 2) + (str[1] - 'A') * 26 + (str[2] - 'A')) - std::stoi(str.substr(4, 7))) <= 100 ? "nice\n" : "not nice\n"); 
    }
}