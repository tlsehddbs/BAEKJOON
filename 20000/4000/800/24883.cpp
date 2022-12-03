#include <iostream>

int main()
{
    char c;
    std::cin >> c;
    std::cout << ((c == 'N' || c == 'n') ? "Naver D2" : "Naver Whale");
}