#include <iostream>

int main()
{
    int a, w;
    std::string name;
    while(true)
    {
        std::cin >> name >> a >> w;
        if(name == "#" && a == 0 && w == 0)
            return 0;
        std::cout << name << (a > 17 || w >= 80 ? " Senior\n" : " Junior\n");
    }
}