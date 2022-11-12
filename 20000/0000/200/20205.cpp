#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k, arr[11][11] = {};
    std::cin >> n >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    for(int i = 0; i < n * k; i++)
    {
        for(int j = 0; j < n * k; j++)
            std::cout << arr[i / k][j / k] << " ";
        std::cout << "\n";
    }
}