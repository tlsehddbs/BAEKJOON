#include <iostream>

int main()
{
    int hh, mm, t, temp;
    std::cin >> hh >> mm >> t;

    temp = hh * 60 + mm + t;
    hh = (temp / 60) % 24;
    mm = temp % 60;

    std::cout << hh << " " << mm;
}