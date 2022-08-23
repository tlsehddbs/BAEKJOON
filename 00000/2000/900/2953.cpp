#include <iostream>

int main()
{
    int sum = 0, max = 0, l;
    for(int i = 0; i < 5; i++)
    {
        sum = 0;
        for(int j = 0; j < 4; j++)
        {
            int tmp;
            std::cin >> tmp;
            sum += tmp;
        }
        if(sum > max)
        {
            max = sum;
            l = i;
        }
    }
    std::cout << l + 1 << " " << max;
}