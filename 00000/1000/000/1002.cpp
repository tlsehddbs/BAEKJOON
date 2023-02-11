#include <iostream>
#include <cmath>

int main()
{
    int t, x1, y1, x2, y2, r1, r2;
    double dist, sub;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dist = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
        sub = r1 > r2 ? r1 - r2 : r2 - r1;
        if(dist == 0 && r1 == r2)
            std::cout << "-1\n";
        else if(r1 + r2 == dist || sub == dist)
            std::cout << "1\n";
        else if(sub < dist && dist < (r1 + r2))
            std::cout << "2\n";
        else
            std::cout << "0\n";
    }
}