#include <iostream>
#include <vector>

double ccw(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return (x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3) / 2;
}

int main()
{
    int n;
    double res = 0;
    std::vector<std::pair<double, double> > v;
    std::cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i].first >> v[i].second;
    for(int i = 1; i < n - 1; i++)
        res += ccw(v[0].first, v[0].second, v[i].first, v[i].second, v[i + 1].first, v[i + 1].second);
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << std::abs(res);
}