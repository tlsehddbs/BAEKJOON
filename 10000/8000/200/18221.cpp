#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, arr[1001][1001] = {}, cnt = 0;
    std::pair<int, int> s, p;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] == 5)
            {
                p.first = i;
                p.second = j;
            }
            if(arr[i][j] == 2)
            {
                s.first = i;
                s.second = j;
            }
        }
    double calc = std::sqrt(std::pow(s.first - p.first, 2) + std::pow(s.second - p.second, 2));
    if(calc < 5.0)
    {
        std::cout << 0;
        return 0;
    }
    if(s.first > p.first)
        std::swap(s.first, p.first);
    if(s.second > p.second)
        std::swap(s.second, p.second);
    for(int i = s.first; i <= p.first; i++)
        for(int j = s.second; j <= p.second; j++)
            if(arr[i][j] == 1)
                cnt++;
    if(cnt >= 3)
        std::cout << 1;
    else
        std::cout << 0;
}