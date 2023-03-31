#include <iostream>

int main()
{
    int n, tmp, max = -1;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        max = tmp > max ? tmp : max;
    }
    std::cout << max;
}