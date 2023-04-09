#include <iostream>
#include <deque>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k;
    std::string str;
    std::deque<char> dq;
    std::cin >> n >> k >> str;
    for(int i = 0; i < str.length(); i++)
    {
        while(k && !dq.empty() && dq.back() < str[i])
        {
            dq.pop_back();
            k--;
        }
        dq.push_back(str[i]);
    }
    for(int i = 0; i < dq.size() - k; i++)
        std::cout << dq[i];
}