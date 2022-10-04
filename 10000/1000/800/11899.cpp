#include <iostream>
#include <stack>

int main()
{
    int cnt = 0;
    std::stack<char> s;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
            s.push('(');
        if(str[i] == ')')
            if(s.empty())
                cnt++;
            else
                s.pop();
    }
    std::cout << s.size() + cnt;
}