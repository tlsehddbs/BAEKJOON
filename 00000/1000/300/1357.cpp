#include <iostream>
#include <algorithm>

int main()
{
    std::string x, y;
    std::cin >> x >> y;
    std::reverse(x.begin(), x.end());
    std::reverse(y.begin(), y.end());
    int xx = std::stoi(x);
    int yy = std::stoi(y);
    int a = xx + yy;
    std::string aa = std::to_string(a);
    std::reverse(aa.begin(), aa.end());
    int b = std::stoi(aa);
    std::cout << b;
}