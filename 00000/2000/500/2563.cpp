#include <iostream>

int main()
{
    int n, arr[100][100] = {}, x, y, cnt = 0;
    std::cin >> n;
    for(int k = 0; k < n; k++)
    {
        std::cin >> x >> y;
        for(int i = x; i < x + 10; i++)
            for(int j = y; j < y + 10; j++)
                if(!arr[i][j])
                {
                    cnt++;
                    arr[i][j] = 1;
                }
    }
    std::cout << cnt;
}