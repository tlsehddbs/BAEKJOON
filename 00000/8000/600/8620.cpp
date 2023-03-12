#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, b;
    std::string str;
    std::map<std::string, int> m;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str >> b;
        m[str] += b;
    }
    for(auto a = m.begin(); a != m.end(); a++)
        std::cout << a->first << " " << a->second << "\n";
}