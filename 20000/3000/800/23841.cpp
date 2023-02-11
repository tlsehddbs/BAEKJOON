#include <iostream>

int main()
{
    int n, m;
    char arr[51][51] = {};
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] != '.' && arr[i][j] != arr[i][m - j - 1])
                arr[i][m - j - 1] = arr[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            std::cout << arr[i][j];
        std::cout << "\n";
    }
}