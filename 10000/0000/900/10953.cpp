#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, a, b;
    char c;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> a >> c >> b;
        std::cout << a + b << "\n";
    }
}