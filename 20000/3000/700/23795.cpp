#include <iostream>

int main()
{
    int tmp, ans = 0;
    while(true)
    {
        std::cin >> tmp;
        if(tmp == -1)
            break;
        ans += tmp;
    }
    std::cout << ans;
}