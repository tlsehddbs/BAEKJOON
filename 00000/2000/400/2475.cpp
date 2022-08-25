#include <iostream>

int main()
{
    int num, sum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        std::cin >> num;
        sum += num * num;
    }
    std::cout << sum % 10;
}