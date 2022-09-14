#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    std::cout << str[0];
    for(int i = 0; i < str.length(); i++)
        if(str[i] == '-')
            std::cout << str[i + 1];
}