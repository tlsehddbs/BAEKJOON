#include <iostream>

int main()
{
    int n, x, y;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        std::cout << (x >= y ? "MMM BRAINS\n" : "NO BRAINS\n");
    }
}