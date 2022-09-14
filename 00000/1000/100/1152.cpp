#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    int cnt = 1;
    if(str.empty())
        std:: cout << "0";
    for(int i = 0; i < str.length(); i++)
        if(str[i] == ' ')
            cnt++;
    if(str[0] == ' ')               cnt--;
    if(str[str.length()-1] == ' ')  cnt--;
    std::cout << cnt;
}