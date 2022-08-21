#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, sum = 0;
    char num;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> num;
        sum += num - 48;
    }
    std::cout << sum;
}