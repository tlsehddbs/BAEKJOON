#include <iostream>

int main()
{
    bool java = false, cpp = false;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '_')
        {
            if(str[i - 1] == '_')
            {
                std::cout << "Error!";
                return 0;
            }
            java = true;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
            cpp = true;
    }
    if((java && cpp) || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_' || str[str.length() - 1] == '_')
        std::cout << "Error!";
    else if(java)
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '_')
                continue;
            else if(str[i - 1] == '_')
                std::cout << char(str[i] - 32);
            else
                std::cout << str[i];
        }
    else if(cpp)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                std::cout << "_" << char(str[i] + 32);
            else
                std::cout << str[i];
        }
    }
    else
        std::cout << str;
}