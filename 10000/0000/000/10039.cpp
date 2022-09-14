#include <iostream>

int main()
{
    int s = 0;
    for(int i = 0; i < 5; i++)
    {
        int tmp;
        std::cin >> tmp;
        if(tmp < 40)
            tmp = 40;
        s += tmp; 
    }
    std::cout << s / 5;
}