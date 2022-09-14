#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, pos;
    std::string str;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> pos >> str;
        for(int j = 0; j < str.length(); j++)
            if(j != pos - 1)
                std::cout << str[j];
        std::cout << "\n";
    }
}