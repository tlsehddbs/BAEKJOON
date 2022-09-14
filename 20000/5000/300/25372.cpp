#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        if(str.length() >= 6 && str.length() <= 9)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
}