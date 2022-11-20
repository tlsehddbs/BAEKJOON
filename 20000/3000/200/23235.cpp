#include <iostream>

int main()
{
    std::string str;
    for(int i = 1; ; i++)
    {
        std::getline(std::cin, str);
        if(str == "0")
            return 0;
        std::cout << "Case " << i << ": Sorting... done!\n";
    }
}