#include <iostream>
#include <algorithm>

int main()
{
    int w[10], k[10], tmp;
    for(int i = 0; i < 10; i++)
        std::cin >> w[i];
    for(int i = 0; i < 10; i++)
        std::cin >> k[i];

    std::sort(w, w + 10);
    std::sort(k, k + 10);
    std::cout << w[7] + w[8] + w[9] << " " << k[7] + k[8] + k[9];
}