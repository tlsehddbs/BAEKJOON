#include <iostream>
#include <stack>

int main()
{
    std::string str;
    while(true)
    {
        std::stack<char> s;
        std::getline(std::cin, str);
        if(str == "#")
            return 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
                s.push(str[i]);
            if(str[i] == ')')
                s.top() == '(' ? s.pop() : s.push(str[i]);
            if(str[i] == '}')
                s.top() == '{' ? s.pop() : s.push(str[i]);
            if(str[i] == ']')
                s.top() == '[' ? s.pop() : s.push(str[i]);
        }
        std::cout << (s.empty() ? "Legal\n" : "Illegal\n");
    }
}