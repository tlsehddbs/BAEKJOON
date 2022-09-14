#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int arr[10][10] = {}, max = -1, x, y;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    std::cout << max << "\n" << x << " " << y;
}