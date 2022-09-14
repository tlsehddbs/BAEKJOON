#include <iostream>
#include <algorithm>

int main()
{
    int n, m;
    std::string str;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        std::reverse(str.begin(), str.end());
        std::cout << str << "\n";
    }
}