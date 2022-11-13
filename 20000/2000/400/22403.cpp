#include <iostream>
#include <stack>

int main()
{
    int n;
    std::stack<int> s;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        if(str == "A")
            s.push(1);
        if(str == "Un")
        {
            if(!s.empty())
                s.pop();
            else
            {
                std::cout << "NO";
                return 0;
            }
        }
    }
    std::cout << (s.empty() ? "YES" : "NO");
}