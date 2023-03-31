#include <iostream>

int main()
{
    int n, t, sum = 0, tmp;
    std::cin >> n >> t;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        sum += tmp;
        if(sum > t)
        {
            std::cout << i;
            return 0;
        } 
    }
    std::cout << n;
}