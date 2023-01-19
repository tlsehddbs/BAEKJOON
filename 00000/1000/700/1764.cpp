#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::string str;
    std::vector<std::string> v;
    std::map<std::string, int> mp;
    std::cin >> n >> m;
    for(int i = 0; i < n + m; i++)
    {
        std::cin >> str;
        mp[str]++;
        if(mp[str] > 1)
            v.push_back(str);
    }
    std::sort(v.begin(), v.end());
    std::cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n";
}