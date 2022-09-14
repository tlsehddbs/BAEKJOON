#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, y, k;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int yy = 0, kk = 0;
        for(int j = 0; j < 9; j++)
        {
            std::cin >> y >> k;
            yy += y;
            kk += k;
        }
        if(yy == kk)
            std::cout << "Draw\n";
        else
            std::cout << (yy > kk ? "Yonsei\n" : "Korea\n"); 
    }
}