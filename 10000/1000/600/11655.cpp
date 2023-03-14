#include <iostream>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(str[i] - 'A' < 13)
                str[i] += 13;
            else
                str[i] -= 13;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i] - 'a' < 13)
                str[i] += 13;
            else
                str[i] -= 13;
        }
    }
    std::cout << str;
}