#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    if(str.find("D2") != std::string::npos || str.find("d2") != std::string::npos)
        std::cout << "D2";
    else
        std::cout << "unrated";
}