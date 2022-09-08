#include <iostream>

int main()
{
    int n, tmp, dif = 5;
    std::string str, ans;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str >> tmp;
        if(dif > tmp)
        {
            dif = tmp;
            ans = str;
        }
    }
    std::cout << ans;
}