#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, a, t, tmp, score = 0;
    std::stack<std::pair<int, int>> s;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if(tmp == 1)
        {
            std::cin >> a >> t;
            s.push({ a, t });
        }
        if(!s.empty())
        {
            s.top().second--;
            if(s.top().second == 0)
            {
                score += s.top().first;
                s.pop();
            }
        }
    }
    std::cout << score;
}