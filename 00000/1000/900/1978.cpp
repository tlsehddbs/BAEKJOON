#include <iostream>

int main()
{
    int n, num, cnt = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> num;
        for(int j = 2; j <= num; j++)
        {
            if(num == j)
                cnt++;
            if(num % j == 0)
                break;
        }
    }
    std::cout << cnt;
}