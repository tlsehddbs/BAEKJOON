#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::stack<int> s;
    std::string od;
    int n, num;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> od;
        if(od == "push")
        {
            std::cin >> num;
            s.push(num);
        }
        if(od == "pop")
        {
            if(!s.empty())
            {
                std::cout << s.top() << "\n";
                s.pop();
            }
            else
                std::cout << -1 << "\n";
        }
        if(od == "size")
            std::cout << s.size() << "\n";
        if(od == "empty")
        {
            if(!s.empty())
                std::cout << 0 << "\n";
            else
                std::cout << 1 << "\n";
        }
        if(od == "top")
        {
            if(!s.empty())
                std::cout << s.top() << "\n";
            else
                std::cout << -1 << "\n";
        }
    }
}