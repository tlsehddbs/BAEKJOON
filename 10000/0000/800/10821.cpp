#include <iostream>

int main()
{
    int cnt = 1;
    std::string str;
    std::cin >> str;

    for(int i = 0; i < str.length(); i++)
        if(str[i] == ',')
            cnt++;
    std::cout << cnt;
}