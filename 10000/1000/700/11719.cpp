#include <iostream>
#include <string>

int main()
{
    std::string str;
    for(int i = 0; i < 100; i++)
    {
        std::getline(std::cin, str);
        std::cout << str << "\n";
    }
}