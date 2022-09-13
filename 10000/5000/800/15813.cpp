#include <iostream>

int main()
{
    int n, p = 0;
    std::string name;
    std::cin >> n >> name;
    for(int i = 0; i < name.length(); i++)
        p += (char)name[i] - 64;
    std::cout << p;
}