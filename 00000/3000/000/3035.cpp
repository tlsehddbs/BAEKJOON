#include <iostream>

int main()
{
    int r, c, zr, zc;
    char arr[51][51] = {};
    std::cin >> r >> c >> zr >> zc;
    for(int i = 0; i < r; i++)
        std::cin >> arr[i];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < zr; j++)
        {
            for(int k = 0; k < c; k++)
                for(int l = 0; l < zc; l++)
                    std::cout << arr[i][k];
            std::cout << "\n";
        }
}