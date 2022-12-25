#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    if(s.find('A') != std::string::npos)
    {
        for(int i = 0; i < s.length(); i++)
            if(s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
                s[i] = 'A';
    }
    else if(s.find('B') != std::string::npos)
    {
        for(int i = 0; i < s.length(); i++)
            if(s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
                s[i] = 'B';
    }
    else if(s.find('C') != std::string::npos)
    {
        for(int i = 0; i < s.length(); i++)
            if(s[i] == 'D' || s[i] == 'F')
                s[i] = 'C';
    }
    else
        for(int i = 0; i < s.length(); i++)
            s[i] = 'A';
    std::cout << s;
}