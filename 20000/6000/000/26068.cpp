#include <iostream>

int main()
{
    int n, dd, cnt = 0;
    char tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp >> tmp >> dd;
        if(dd <= 90)
            cnt++;
    }
    std::cout << cnt;
}