#include <iostream>
#include <algorithm>

int main()
{
    int n[3];
    std::cin >> n[0] >> n[1] >> n[2];
    std::sort(n, n + 3);
    if(n[0] == n[1] && n[1] == n[2] && n[2] == n[0])
    {
        std::cout << 2;
        return 0;
    }
    if(n[2] * n[2] == n[0] * n[0] + n[1] * n[1])
    {
        std::cout << 1;
        return 0;
    }
    std::cout << 0;
}