#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, sum = 0;
    while(std::cin >> n)
        sum += n;
    std::cout << sum;
}