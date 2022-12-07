#include <iostream>

int main()
{
    char arr[5] = { 'D', 'C', 'B', 'A', 'E'};
    for(int i = 0; i < 3; i++)
    {
        int cnt = 0, n;
        for(int j = 0; j < 4; j++)
        {
            std::cin >> n;
            cnt += n;
        }
        std::cout << arr[cnt] << "\n";
    }
}