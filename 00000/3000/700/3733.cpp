#include <iostream>

int main()
{
    int n, s;
    while(std::cin >> n >> s)
        std::cout << s / (n + 1) << "\n";
}