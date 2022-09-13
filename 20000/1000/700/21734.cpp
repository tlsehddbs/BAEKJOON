#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        int cnt, tmp;
        tmp = (char)str[i];
        cnt = tmp / 100 + (tmp % 100) / 10 + tmp % 10;
        for(int j = 0; j < cnt; j++)
            std::cout << str[i];
        std::cout << "\n";
    }
}