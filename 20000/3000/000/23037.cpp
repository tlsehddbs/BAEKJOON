#include <iostream>
#include <cmath>

int main()
{
    int ans = 0;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < 5; i++)
        ans += std::pow((str[i] - 48), 5);
    std::cout << ans;
}