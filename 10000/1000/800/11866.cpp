#include <iostream>
#include <queue>

int main()
{
    int n, k;
    std::queue<int> q;
    std::cin >> n >> k;
    for(int i = 1; i <= n; i++)
        q.push(i);
    std::cout << "<";
    while(!q.empty())
    {
        for(int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        std::cout << q.front();
        if(q.size() > 1)
            std::cout << ", ";
        q.pop();
    }
    std::cout << ">";
}