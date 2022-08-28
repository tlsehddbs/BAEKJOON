#include <iostream>

int main()
{
    int hh, mm, ss, t;
    std::cin >> hh >> mm >> ss >> t;
    hh *= 3600;
    mm *= 60;
    ss += hh + mm + t;
    std::cout << (ss / 3600) % 24 << " " << (ss / 60) % 60 << " " << ss % 60;
}