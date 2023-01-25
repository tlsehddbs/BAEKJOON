#include <iostream>

int main()
{
    int h, w, res = 0;
    char arr[100][100] = {};
    bool t = false;
    std::cin >> h >> w;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            std::cin >> arr[i][j];
            if(arr[i][j] == '/' || arr[i][j] == '\\')
            {
                t = !t;
                res++;
            }
            if(arr[i][j] == '.' && t)
                res += 2;
        }
    }
    std::cout << res * 0.5;
}