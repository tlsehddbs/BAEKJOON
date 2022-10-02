#include <iostream>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::queue<int> q;
    int n, num;
    std::string od;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> od;
        if(od == "push")
        {
            std::cin >> num;
            q.push(num);
        }
        if(od == "pop")
        {
            if(!q.empty())
            {
                std::cout << q.front() << "\n";
                q.pop();
            }
            else
                std::cout << -1 << "\n";
        }
        if(od == "size")
            std::cout << q.size() << "\n";
        if(od == "empty")
        {
            if(q.empty())
                std::cout << 1 << "\n";
            else
                std::cout << 0 << "\n";
        }
        if(od == "front")
        {
            if(!q.empty())
                std::cout << q.front() << "\n";
            else
                std::cout << -1 << "\n";
        }
        if(od == "back")
        {
            if(!q.empty())
                std::cout << q.back() << "\n";
            else
                std::cout << -1 << "\n";
        }
    }
}