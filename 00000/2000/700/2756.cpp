#include <iostream>
#include <cmath>

int calc(float s)
{
    if(s <= 3)          return 100;
    else if(s <= 6)     return 80;
    else if(s <= 9)     return 60;
    else if(s <= 12)    return 40;
    else if(s <= 15)    return 20;
    else                return 0;
}

int main()
{
    int n;
    float x, y, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int p1s = 0, p2s = 0;
        for(int j = 0; j < 3; j++)
        {
            std::cin >> x >> y;
            tmp = std::sqrt(x * x + y * y);
            p1s += calc(tmp);
        }
        for(int j = 0; j < 3; j++)
        {
            std::cin >> x >> y;
            tmp = std::sqrt(x * x + y * y);
            p2s += calc(tmp);
        }
        std::cout << "SCORE: " << p1s << " to " << p2s << ", ";
        if(p1s == p2s)
            std::cout << "TIE.\n";
        else
            std::cout << (p1s > p2s ? "PLAYER 1 WINS.\n" : "PLAYER 2 WINS.\n");
    }
}