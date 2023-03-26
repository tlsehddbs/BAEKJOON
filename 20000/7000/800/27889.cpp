#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    if(str == "NLCS")
        std::cout << "North London Collegiate School";
    if(str == "BHA")
        std::cout << "Branksome Hall Asia";
    if(str == "KIS")
        std::cout << "Korea International School";
    if(str == "SJA")
        std::cout << "St. Johnsbury Academy";
}