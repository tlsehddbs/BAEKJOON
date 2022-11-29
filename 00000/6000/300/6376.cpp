#include <iostream>

double fac(int n)
{
    double f = 1;
    for(double i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    double res = 1;
    std::cout << "n e\n- -----------\n0 1\n";
    for(int i = 1; i <= 9; i++)
    {
        std::cout << i << ' ';
        std::cout << std::fixed;
        std::cout.precision(9);
        res += 1 / fac(i);
        if(i == 1)
            std::cout << "2\n";
        else if(i == 2)
            std::cout << "2.5\n";
        else
            std::cout << res << "\n";
    }
}