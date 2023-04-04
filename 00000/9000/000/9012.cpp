#include <iostream>
#include <stack>

std::string VPS(std::string str)
{
    std::stack<char> s;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
            s.push(str[i]);
        else
        {
            if(!s.empty())
                s.pop();
            else
                return "NO\n";
        }
    }
    if(s.empty())
        return "YES\n";
    else
        return "NO\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::string str;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> str;
        std::cout << VPS(str);
    }
}