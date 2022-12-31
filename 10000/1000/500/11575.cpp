#include <iostream>

int main()
{
    int t, a, b;
    std::string str;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> a >> b >> str;
        for(int j = 0; j < str.length(); j++)
            std::cout << char((a * (str[j] - 'A') + b) % 26 + 65);
        std::cout << "\n";
    }
}