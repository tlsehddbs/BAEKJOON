#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, p1[2], p2[2], tmp, flg = 0;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            std::cin >> tmp;
            if(tmp == 1)
            {
                if(!flg)
                {
                    p1[0] = i;
                    p1[1] = j;
                    flg++;
                }
                else
                {
                    p2[0] = i;
                    p2[1] = j;
                    break;
                }
            }
        }
    std::cout << (std::abs(p2[0] - p1[0]) + std::abs(p2[1] - p1[1]));
}