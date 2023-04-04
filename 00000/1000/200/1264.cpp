#include <iostream>

int main()
{
    std::string str;
    while(true)
    {
        std::getline(std::cin, str);
        if(str == "#")
            break;
        int cnt = 0;
        for(int i = 0; i < str.length(); i++)
            if(str[i] == 'A' || 
               str[i] == 'a' ||
               str[i] == 'E' ||
               str[i] == 'e' ||
               str[i] == 'I' ||
               str[i] == 'i' ||
               str[i] == 'O' ||
               str[i] == 'o' ||
               str[i] == 'U' ||
               str[i] == 'u')    
                cnt++;
        std::cout << cnt << "\n";
    }
}