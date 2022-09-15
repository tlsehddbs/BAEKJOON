#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int res = 0, tmp = 1;
    std::stack<char> s;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            tmp *= 2;
            s.push('(');
        }
        if(str[i] == '[')
        {
            tmp *= 3;
            s.push('[');
        }
        if(str[i] == ')')
        {
            if(s.empty() || s.top() == '[')
            {
                std::cout << 0;
                return 0;
            }
            if(str[i - 1] == '(')
            {
                res += tmp;
                s.pop();
                tmp /= 2;
            }
            else
            {
                tmp /= 2;
                s.pop();
            }
        }
        if(str[i] == ']')
        {
            if(s.empty() || s.top() == '(')
            {
                std::cout << 0;
                return 0;
            }
            if(str[i - 1] == '[')
            {
                res += tmp;
                s.pop();
                tmp /= 3;
            }
            else
            {
                tmp /= 3;
                s.pop();
            }
        }
    }
    std::cout << (!s.empty() ? 0 : res);
}