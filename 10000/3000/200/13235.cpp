#include <iostream>
#include <algorithm>

int main()
{
    std::string str, tmp;
    std::cin >> str;
    tmp = str;
    std::reverse(tmp.begin(), tmp.end());
    if(str == tmp)
        std::cout << "true";
    else
        std::cout << "false";
}