#include <iostream>

int main()
{
    std::string str;
    while(std::cin >> str)
    {
        if(str == "0")
            return 0;
        int l = 1;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '1')
                l += 2;
            else if(str[i] == '0')
                l += 4;
            else
                l += 3;
            l++;
        }
        std::cout << l << "\n";
    }
}