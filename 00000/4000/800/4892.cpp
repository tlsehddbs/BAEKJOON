#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, n1, n2, n3, n4;
    for(int i = 0; ; i++)
    {
        std::cin >> n;
        if(n == 0)
            return 0;
        n1 = 3 * n;
        if(n1 % 2 == 0)
            n2 = n1 / 2;
        else
            n2 = (n1 + 1) / 2;
        n3 = 3 * n2;
        n4 = n3 / 9;
        if(n1 % 2 == 0)
            n = 2 * n4;
        else
            n = 2 * n4 + 1;
        if(n1 % 2 == 0)
            std::cout << i + 1 << ". even " << n4 << "\n";
        else
            std::cout << i + 1 << ". odd " << n4 << "\n"; 
    }
}