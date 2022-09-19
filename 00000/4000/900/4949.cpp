#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    while(true)
    {
a:
        std::stack<char> s;
        std::getline(std::cin, str);
        if(str == ".")
            return 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            if(str[i] == ')')
            {
                if(s.empty())
                {
                    std::cout << "no\n";
                    goto a;
                }
                else if(s.top() == '(')
                    s.pop();
                else
                {
                    std::cout << "no\n";
                    goto a;
                }
            }
            if(str[i] == ']')
            {
                if(s.empty())
                {
                    std::cout << "no\n";
                    goto a;
                }
                else if(s.top() == '[')
                    s.pop();
                else
                {
                    std::cout << "no\n";
                    goto a;
                }
            }
        }
        std::cout << (s.empty() ? "yes\n" : "no\n");
    }
}