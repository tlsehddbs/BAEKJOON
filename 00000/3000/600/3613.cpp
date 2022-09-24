#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    if(str.find('_') != std::string::npos)
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '_')
                continue;
            else if(str[i - 1] == '_')
                std::cout << char(str[i] - 32);
            else
                std::cout << str[i];
        }
    else
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                std::cout << "_" << char(str[i] + 32);
            else
                std::cout << str[i];
        }
    }
}