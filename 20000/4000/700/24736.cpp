#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t, f, s, p, c;
    for(int i = 0; i < 2; i++)
    {
        std::cin >> t >> f >> s >> p >> c;
        std::cout << t * 6 + f * 3 + s * 2 + p * 1 + c * 2 << " ";
    }
}