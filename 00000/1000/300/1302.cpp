#include <iostream>
#include <map>
#include <algorithm>

int main()
{
    int n, max = 0;
    std::string str, res;
    std::map<std::string, int> mp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        mp[str]++;
    }
    for (auto s = mp.begin(); s != mp.end(); s++)
    {
        if(s->second > max)
        {
            max = s->second;
            res = s->first;
        }
    }
    std::cout << res;
}