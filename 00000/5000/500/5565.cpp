#include <iostream>

int main()
{
    int tot, tmp;
    std::cin >> tot;
    for(int i = 0; i < 9; i++)
    {
        std::cin >> tmp;
        tot -= tmp;
    }
    std::cout << tot;
}