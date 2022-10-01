#include <iostream>

int main()
{
    int n, res = 0;
    char c;
    std::cin >> res;
    while(true)
    {
        std::cin >> c;
        if(c == '=')
        {
            std::cout << res;
            return 0;
        }
        else
        {
            std::cin >> n;
            if(c == '+')    res += n;
            if(c == '-')    res -= n;
            if(c == '*')    res *= n;
            if(c == '/')    res /= n;
        }
    }
}