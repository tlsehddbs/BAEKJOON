#include <iostream>

int main()
{
    int s, arr[51] = {};
    for(int i = 0; i < 50; i++)
        std::cin >> arr[i];
    std::cin >> s;
    for(int i = 0; i < 50; i++)
    {
        if(arr[i] == s)
        {
            if(i + 1 <= 5)          std::cout << "A+";
            else if(i + 1 <= 15)    std::cout << "A0";
            else if(i + 1 <= 30)    std::cout << "B+";
            else if(i + 1 <= 35)    std::cout << "B0";
            else if(i + 1 <= 45)    std::cout << "C+";
            else if(i + 1 <= 48)    std::cout << "C0";
            else                    std::cout << "F";
        }
    }
}