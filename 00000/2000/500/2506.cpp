#include <iostream>

int main()
{
    int n, arr[101] = {}, p = 0, res = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if(arr[i] == 1)
        {
            p++;
            res += p;
        }
        else
            p = 0;
    }
    std::cout << res;
}