#include <iostream>
#include <algorithm>

int comp(std::string a, std::string b)
{
    if(a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    int n;
    std::string str[20000];
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; i++)
        std::getline(std::cin, str[i]);
    std::sort(str, str + n, comp);
    for(int i = 0; i < n; i++)
        if(str[i] != str[i - 1])
            std::cout << str[i] << "\n";
}