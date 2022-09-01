#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, arr[100001] = {}, cnt = 0, cmpr = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    for(int i = n - 1; i >= 0; i--)
        if(arr[i] > cmpr)
        {
            cnt++;
            cmpr = arr[i];
        }
    std::cout << cnt;
}