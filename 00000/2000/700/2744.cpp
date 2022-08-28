#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    for(int i = 0; i < str.length(); i++)
        if(str[i] >= 65 && str[i] <= 90)
            std::cout << (str[i] += 32);
        else
            std::cout << (str[i] -= 32);
}