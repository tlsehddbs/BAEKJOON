#include <iostream>

int main()
{
    std::string str, res;
    while(true)
    {
        std::getline(std::cin, str);
        if(str == "END")
            break;
        for (int i = 0; i < str.length(); i++) 
            std::cout << str[str.length() - i - 1];
        std::cout << "\n";
    }
}