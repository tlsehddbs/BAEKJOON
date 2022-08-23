#include <iostream>
#include <cstring>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    float a;
    std::string str;

    std::cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        std::cin >> a;
        std::getline(std::cin, str);
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == '@') a *= 3;
            if(str[j] == '%') a += 5;
            if(str[j] == '#') a -= 7;
        }
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << a << "\n";
    }
}