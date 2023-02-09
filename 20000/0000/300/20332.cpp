#include <iostream>

int main()
{
    int n, tmp, ans = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        ans += tmp;
    }
    std::cout << (ans % 3 == 0 ? "yes" : "no");
}