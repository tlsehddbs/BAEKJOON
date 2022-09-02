#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, arr[10001] = {}, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        arr[tmp]++;
    }
    for(int i = 0; i < 10001; i++)
        for(int j = 0; j < arr[i]; j++)
            std::cout << i << "\n";
}