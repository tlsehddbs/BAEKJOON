#include <iostream>

int main()
{
    int n, d = 2;
    std::cin >> n;
    if(n != 1)
        while(n > 1)
        {
            if(n % d == 0)
            {
                std::cout << d << "\n";
                n /= d;
            }
            else
                d++;
        }
}