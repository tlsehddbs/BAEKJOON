#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string k;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> k;
        std::cout << (((int)k[k.length() - 1] % 2 == 0) ? "even\n" : "odd\n");
    }
}