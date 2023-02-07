#include <iostream>

int main()
{
    int n, cnt = 0, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        cnt += tmp;
    }
    std::cout << cnt;
}