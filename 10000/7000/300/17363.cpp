#include <iostream>

int main()
{
    int n, m;
    char arr[101][101] = {};
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];
    for(int i = m - 1; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j][i] == '-')        std::cout << '|';
            else if(arr[j][i] == '|')   std::cout << '-';
            else if(arr[j][i] == '/')   std::cout << '\\';
            else if(arr[j][i] == '\\')  std::cout << '/';
            else if(arr[j][i] == '^')   std::cout << '<';
            else if(arr[j][i] == '<')   std::cout << 'v';
            else if(arr[j][i] == 'v')   std::cout << '>';
            else if(arr[j][i] == '>')   std::cout << '^';
            else                        std::cout << arr[j][i];
        }
        std::cout << "\n";
    }
}