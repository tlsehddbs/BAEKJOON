#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int cnt = 0;
    char arr[9][9] = {};
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cin >> arr[i][j];
            if(i % 2 == 0 && j % 2 == 0)
                if(arr[i][j] == 'F')
                    cnt++;
            if(i % 2 != 0 && j % 2 != 0)
                if(arr[i][j] == 'F')
                    cnt++;
        }
    }
    std::cout << cnt;
}