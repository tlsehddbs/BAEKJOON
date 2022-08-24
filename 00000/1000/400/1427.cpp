#include <iostream>
#include <algorithm>

int main()
{
    std::string num;
    std::cin >> num;
    std::sort(num.rbegin(), num.rend());
    std::cout << num;
}