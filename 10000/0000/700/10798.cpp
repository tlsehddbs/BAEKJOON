#include <iostream>

int main()
{
    char str[5][16] = {};
    for(int i = 0; i < 5; i++)
        std::cin >> str[i];
    for(int j = 0; j < 15; j++)
        for(int i = 0; i < 5; i++)
            if(str[i][j] != '\0')
                std::cout << str[i][j];
}