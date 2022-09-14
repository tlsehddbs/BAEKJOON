#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, n, arr[101] = {};
    std::cin >> t;
    for(int i = 0 ; i < t; i++)
    {
        int sum = 0;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> arr[i];
            sum += arr[i];
        }
        std::cout << sum << "\n";
    }
}