#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, c;
    std::string f, res = "NO";
    std::map<std::string, int> m;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> f >> c;
        m[f] += c;
    }
    for(auto a = m.begin(); a != m.end(); a++)
        if(a->second == 5)
            res = "YES";
    std::cout << res;
}