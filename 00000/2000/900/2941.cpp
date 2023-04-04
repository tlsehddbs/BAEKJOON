#include <iostream>

int main()
{
    int tmp;
    std::string str, a[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    std::cin >> str;
    for(int i = 0; i < 8; i++)
        while(true)
        {
            tmp = str.find(a[i]);
            if(tmp == std::string::npos)
                break;
            str.replace(tmp, a[i].length(), ".");
        }
    std::cout << str.length();
}