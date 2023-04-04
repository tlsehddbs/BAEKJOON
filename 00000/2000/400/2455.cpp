#include <iostream>

int main()
{
    int max = -1, sum = 0;
    for(int i = 0; i < 4; i++)
    {
        int t, f;
        std::cin >> f >> t;
        sum += t - f;
        if(sum > max)
            max = sum;
    }
    std::cout << max;
}