#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if(a < b)  std::cout << "<\n";
    if(a > b)  std::cout << ">\n";
    if(a == b) std::cout << "==\n";
}