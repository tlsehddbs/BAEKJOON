#include <iostream>

int main()
{
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        for(int j = 0; j < str.length(); j++)
            std::cout << (char)std::tolower(str[j]);
        std::cout << "\n";
    }
}