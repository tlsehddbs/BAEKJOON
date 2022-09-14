#include <iostream>

int main()
{
    int max = -1, sum = 0;
    for(int i = 0; i < 10; i++)
    {
        int getOn, getOff;
        std::cin >> getOff >> getOn;
        sum += getOn - getOff;
        if(sum > max)
            max = sum;
    }
    std::cout << max;
}