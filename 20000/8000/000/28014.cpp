#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, cnt = 1;
    std::cin >> n;
    std::vector<int> v(n);
    std::cin >> v[0];
    for(int i = 1; i < n; i++)
    {
        std::cin >> v[i];
        if(v[i - 1] <= v[i])
            cnt++;
    }
    std::cout << cnt;
}