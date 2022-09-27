#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    float n1, n2, tmp, res;
    std::cin >> n1;
    while(true)
    {
        std::cin >> n2;
        if(n2 == 999)
            return 0;
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << n2 - n1 << "\n";
        n1 = n2;
    }
}