#include <iostream>

int main()
{
    int n, res, cnt = 0;
    std::cin >> n;
    res = 1000 - n;

    while(res != 0)
    {
        if(res >= 500)
        {
            res -= 500;
            cnt++;
        }
        else if(res >= 100)
        {
            res -= 100;
            cnt++;
        }
        else if(res >= 50)
        {
            res -= 50;
            cnt++;
        }
        else if(res >= 10)
        {
            res -= 10;
            cnt++;
        }
        else if(res >= 5)
        {
            res -= 5;
            cnt++;
        }
        else if(res >= 1)
        {
            res -= 1;
            cnt++;
        }
    }
    std::cout << cnt;
}