#include <iostream>

int main()
{
    int tmp, res = 0;
    for(int i = 0; i < 6; i++)
    {
        std::cin >> tmp;
        res += tmp * 5;
    }
    std::cout << res;
}