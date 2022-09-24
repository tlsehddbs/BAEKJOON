#include <iostream>

int fibonacci(int n)
{
    if(n > 1)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
        return n;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
}