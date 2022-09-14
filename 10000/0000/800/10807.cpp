#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, arr[1001] = {}, v, cnt = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::cin >> v;
    for(int i = 0; i < n; i++)
        if(arr[i] == v)
            cnt++;
    std::cout << cnt;
}