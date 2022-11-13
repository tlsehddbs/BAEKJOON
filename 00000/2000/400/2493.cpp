#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, idx, ht;
    std::stack<std::pair<int, int> > s;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> ht;
        while(!s.empty())
        {
            if(ht < s.top().second)
            {
                std::cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if(s.empty())
            std::cout << 0 << " ";
        s.push(std::pair(i + 1, ht));
    }
}