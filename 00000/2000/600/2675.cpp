#include <iostream>
#include <cstring>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, r;
    std::string str;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> r >> str;
        for(int j = 0; j < str.length(); j++)
            for(int k = 0; k < r; k++)
                std::cout << str[j];
        std::cout << "\n";
    }
}