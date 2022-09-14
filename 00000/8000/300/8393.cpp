#include <iostream>

int main()
{
    int a, sum = 0;
    std::cin >> a;
    for (int i = 1; i <= a; i++)
        sum += i;
    std::cout << sum;
}