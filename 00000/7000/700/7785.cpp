#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::string name, state, tmp;
    std::map<std::string, int> m;
    std::vector<std::string> v;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> name >> state;
        state == "enter" ? m[name]++ : m[name]--;
    }
    for(auto a = m.begin(); a != m.end(); a++)
        if(a->second != 0)
            v.push_back(a->first);
    std::sort(v.rbegin(), v.rend());
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n";
}