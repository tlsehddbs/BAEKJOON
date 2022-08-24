#include <iostream>

int main()
{
    int p[6] = { 1, 1, 2, 2, 2, 8 }, h[6];
    for(int i = 0; i < 6; i++)
    {
        std::cin >> h[i];
        std::cout << p[i] - h [i] << " ";
    }
}