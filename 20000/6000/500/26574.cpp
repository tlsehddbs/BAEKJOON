#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, c;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> c;
        std::cout << c << " " << c << "\n";
    }
}