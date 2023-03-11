#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, a, b, c, tmp, max = 0, res;
    double cal = 0, p = 0;
    std::vector<int> d;
    std::cin >> n >> a >> b >> c;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        d.push_back(tmp);
    }
    std::sort(d.rbegin(), d.rend());
    cal += c;
    p += a;
    max = cal / p;
    for(int i = 0; i < n; i++)
    {
        cal += d[i];
        p += b;
        res = cal / p;
        max = res > max ? res : max;
    }
    std::cout << max;
}