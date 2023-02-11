#include <iostream>
#include <algorithm>

int main()
{
    std::string str, tmp;
    std::cin >> str;
    tmp = str;
    std::reverse(tmp.begin(), tmp.end());
    std::cout << (str == tmp ? "true" : "false");
}