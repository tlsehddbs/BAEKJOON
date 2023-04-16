#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    for(int i = -999; i < 1000; i++)
        for(int j = -999; j < 1000; j++)
            if((a * i + b * j == c) && (d * i + e * j == f))
                std::cout << i << " " << j;
}