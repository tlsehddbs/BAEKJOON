#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int w, h, x, y, p, px, py, cnt = 0;
    std::cin >> w >> h >> x >> y >> p;
    double rad = h / 2;
    for(int i = 0; i < p; i++)
    {
        std::cin >> px >> py;
        if(py >= y && py <= y + h)
        {
            if(px >= x && px <= x + w)
                cnt++;
            else if(px < x)
            {
                if(std::sqrt(std::pow(px - x, 2) + std::pow(py - (y + rad), 2)) <= rad)
                    cnt++;
            }
            else if(px > x + w)
            {
                if(std::sqrt(std::pow(px - (x + w), 2) + std::pow(py - (y + rad), 2)) <= rad)
                    cnt++;
            }
        }
    }
    std::cout << cnt;
}