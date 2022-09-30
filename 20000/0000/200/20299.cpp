#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k, l, x1, x2, x3, cnt = 0;
    std::vector<int> v;
    std::cin >> n >> k >> l;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x1 >> x2 >> x3;
        if(x1 + x2 + x3 >= k && x1 >= l && x2 >= l && x3 >= l)
        {
            cnt++;
            v.push_back(x1);
            v.push_back(x2);
            v.push_back(x3);
        }
    }
    std::cout << cnt << "\n";
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
}