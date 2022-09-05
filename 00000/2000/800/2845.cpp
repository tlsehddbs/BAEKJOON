#include <iostream>

int main()
{
    int l, p, tmp;
    std::cin >> l >> p;
    for(int i = 0; i < 5; i++)
    {
        std::cin >> tmp;
        std::cout << tmp - l * p << " ";
    }
}