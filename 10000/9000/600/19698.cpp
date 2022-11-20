#include <iostream>

int main()
{
    int n, w, h, l;
    std::cin >> n >> w >> h >> l;
    std::cout << ((w / l) * (h / l) > n ? n : (w / l) * (h / l));
}