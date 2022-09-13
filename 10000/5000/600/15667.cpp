#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    n--;
    for(int i = 1; ; i++)
    {
        if(i + i * i == n)
        {
            std::cout << i;
            return 0;
        }
    }
}