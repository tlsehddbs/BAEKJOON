#include <iostream>

int main()
{
    std::string n;
    while(true)
    {
a:
        std::cin >> n;
        if(n == "0")
            return 0;
        for(int i = 0; i < n.length() / 2; i++)
            if(n[i] != n[n.length() - i - 1])
            {
                std::cout << "no\n";
                goto a;
            }
        std::cout << "yes\n";
    }
}