#include <iostream>

int main()
{
    int sum = 0, p;
    for(int i = 0; i < 5; i++)
    {
        std::cin >> p;
        sum += p;
    }
    std::cout << sum;
}