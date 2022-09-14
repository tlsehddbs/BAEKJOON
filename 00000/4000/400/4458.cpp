#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; i++)
    {
        std::getline(std::cin, str);
        str[0] = std::toupper(str[0]);
        std::cout << str << "\n";
    }
}