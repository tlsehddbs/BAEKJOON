#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::string str[100];
    std::cin >> n;

    for(int i = 0; i < n; i++)
        std::cin >> str[i];
    std::cin >> k;

    if(k == 1)
        for(int i = 0; i < n; i++)
            std::cout << str[i] << "\n";
    else if(k == 2)
        for(int i = 0; i < n; i++)
        {
            std::reverse(str[i].begin(), str[i].end());
            std::cout << str[i] << "\n";
        }
    else if(k == 3)
        for(int i = n - 1; i >= 0; i--)
            std::cout << str[i] << "\n";
}