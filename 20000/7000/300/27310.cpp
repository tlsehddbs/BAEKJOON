#include <iostream>

int main()
{
    int cnt = 0;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ':')
            cnt++;
        if(str[i] == '_')
            cnt += 5;
        cnt++;
    }
    std::cout << cnt;
}