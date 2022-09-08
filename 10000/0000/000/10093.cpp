#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long int a, b;
    std::cin >> a >> b;
    if(a > b)
        std::swap(a, b);
    if(a == b || b - a == 1)
        std::cout << 0;
    else
        std::cout << b - a - 1 << "\n";
    for(long long int i = a + 1; i < b; i++)
        std::cout << i << " ";
}