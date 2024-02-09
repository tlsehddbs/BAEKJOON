#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.size(); i++)
        str[i] = std::toupper(str[i]);
    std::cout << str;
}