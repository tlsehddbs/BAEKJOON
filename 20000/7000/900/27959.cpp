#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::cout << (n * 100 >= m ? "Yes" : "No");
}