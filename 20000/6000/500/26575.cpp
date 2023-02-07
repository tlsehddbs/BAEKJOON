#include <iostream>

int main()
{
    int n;
    double d, f, p;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> d >> f >> p;
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << "$" << d * f * p << "\n";
    }
}