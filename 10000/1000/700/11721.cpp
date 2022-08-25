#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    for(int i = 1; i <= str.length(); i++)
    {
        if(i % 10 == 0) 
            std::cout << str[i - 1] << "\n";
        else
            std::cout << str[i - 1];
    }
}