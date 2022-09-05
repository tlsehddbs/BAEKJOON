#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;

    while(true)
    {
        std::getline(std::cin, str);
        if(str == "***")
            return 0;
        std::reverse(str.begin(), str.end());
        std::cout << str << "\n";
    }
}