#include <iostream>

int main()
{
    int a, b;
    while(true)
    {
        std::cin >> a >> b;
        if(a + b == 0)
            return 0;
        std::cout << 2 * a - b << "\n";
    }
}