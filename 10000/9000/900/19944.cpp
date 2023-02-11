#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::cout << (n >= m ? m <= 2 ? "NEWBIE!" : "OLDBIE!" : "TLE!");
}