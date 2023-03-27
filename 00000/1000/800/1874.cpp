#include <iostream>
#include <stack>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, idx = 0, tmp;
    std::vector<int> v;
    std::vector<char> ans;
    std::stack<int> num;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    for(int i = 1; i <= n; i++)
    {
        num.push(i);
        ans.push_back('+');
        while(!num.empty() && num .top() == v[idx])
        {
            num.pop();
            ans.push_back('-');
            idx++;
        }
    }
    if(!num.empty())
        std::cout << "NO";
    else
        for(int i = 0; i < ans.size(); i++)
            std::cout << ans[i] << "\n";
}