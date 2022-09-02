#include <iostream>

int main()
{
    char arr[6][6] = { "@   @", 
                       "@@@@@", 
                       "@   @",
                       "@@@@@",
                       "@   @" };
    int n;
    std::cin >> n;
    for(int i = 0; i < n * 5; i++)
    {
        for(int j = 0; j < n * 5; j++)
            std::cout << arr[i / n][j / n];
        std::cout << "\n";
    }
}