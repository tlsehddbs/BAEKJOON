#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    while(true)
    {
        int p = 0;
        std::getline(std::cin, str);
        if(str == "#")
            return 0;
        for(int i = 0; i < str.length(); i++)
            if(str[i] != ' ')
                p += (i + 1) * (str[i] - 64);
        std::cout << p << "\n";
    }
}