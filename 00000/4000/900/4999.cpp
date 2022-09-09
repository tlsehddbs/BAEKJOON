#include <iostream>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    std::cout << (a.length() >= b.length() ? "go" : "no");
}