#include <iostream>

long long fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    long long fibarr[91] = { 0, 1, };
    for(int i = 2; i < n + 1; i++)
        fibarr[i] = fibarr[i - 1] + fibarr[i - 2];
    return fibarr[n];
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
}