#include <iostream>

int main()
{
    int r, c, x[8] = { -1, -1, -1, 0, 1, 1, 1, 0 }, y[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
    while(true)
    {
        char arr[102][102] = {};
        std::cin >> r >> c;
        if(r + c == 0)
            return 0;
        for(int i = 1; i <= r; i++)
            for(int j = 1; j <= c; j++)
                std::cin >> arr[i][j];
        for(int i = 1; i <= r; i++)
            for(int j = 1; j <= c; j++)
            {
                int cnt = 0;
                if(arr[i][j] == '.')
                {
                    for(int k = 0; k < 8; k++)
                        if(arr[i + x[k]][j + y[k]] == '*')
                            cnt++;
                    arr[i][j] = cnt + '0';
                }
            }
        for(int i = 1; i <= r; i++)
        {
            for(int j = 1; j <= c; j++)
                std::cout << arr[i][j];
            std::cout << "\n";
        }
    }
}