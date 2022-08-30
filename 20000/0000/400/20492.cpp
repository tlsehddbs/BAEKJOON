#include <iostream>

int main()
{
    long long n;
    std::cin >> n;
    std::cout << (int)(n * 0.78) << " " << (int)(n * 0.8 + n * 0.2 * 0.78);
}