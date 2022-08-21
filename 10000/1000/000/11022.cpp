#include <iostream>

int main()
{
    int a, b, t;
    std::cin >> t;

    for(int i = 1; i <= t; i++)
    {
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
}