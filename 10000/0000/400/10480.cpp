#include <iostream>

int main()
{
    int n, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        std::cout << tmp << " is " << (tmp % 2 == 0 ? "even\n" : "odd\n");
    }
}