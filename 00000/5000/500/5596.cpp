#include <iostream>

int main()
{
    int s1 = 0, s2 = 0, tmp;
    for(int i = 0; i < 4; i++)
    {
        std::cin >> tmp;
        s1 += tmp;
    }
    for(int i = 0; i < 4; i++)
    {
        std::cin >> tmp;
        s2 += tmp;
    }
    std::cout << (s1 >= s2 ? s1 : s2);
}