#include <iostream>
#include <deque>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, tmp;
    std::deque<int> d;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        if(str == "push_front")
        {
            std::cin >> tmp;
            d.push_front(tmp);
        }
        if(str == "push_back")
        {
            std::cin >> tmp;
            d.push_back(tmp);
        }
        if(str == "pop_front")
        {
            if(!d.empty())
            {
                std::cout << d.front() << "\n";
                d.pop_front();
            }
            else
                std::cout << -1 << "\n";
        }
        if(str == "pop_back")
        {
            if(!d.empty())
            {
                std::cout << d.back() << "\n";
                d.pop_back();
            }
            else
                std::cout << -1 << "\n";
        }
        if(str == "size")
            std::cout << d.size() << "\n";
        if(str == "empty")
            std::cout << d.empty() << "\n";
        if(str == "front")
        {
            if(!d.empty())
                std::cout << d.front() << "\n";
            else
                std::cout << -1 << "\n";
        }
        if(str == "back")
        {
            if(!d.empty())
                std::cout << d.back() << "\n";
            else
                std::cout << -1 << "\n";
        }
    }
}