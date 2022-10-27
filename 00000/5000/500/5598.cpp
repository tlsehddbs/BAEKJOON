#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 68 && str[i] <= 90)
            std::cout << char(str[i] - 3);
        else
            std::cout << char(str[i] + 23);
    }
}