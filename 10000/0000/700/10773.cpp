#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::stack<int> s;
    int k, sum = 0, tmp;
    std::cin >> k;
    for(int i = 0; i < k; i++)
    {
        std::cin >> tmp;
        if(tmp != 0)
            s.push(tmp);
        else
            s.pop();
    }
    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    std::cout << sum;
}