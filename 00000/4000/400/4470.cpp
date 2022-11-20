#include <iostream>

int main()
{
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 1; i <= n; i++)
    {
        std::getline(std::cin, str);
        std::cout << i << ". " << str << "\n";
    }
}