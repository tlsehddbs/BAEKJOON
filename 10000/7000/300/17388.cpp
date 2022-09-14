#include <iostream>

int main()
{
    int arr[3], min = 101, sum = 0, s;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
        if(arr[i] < min)
        {
            min = arr[i];
            s = i;
        }
    }
    if(sum >= 100)
        std::cout << "OK";
    else
    {
        if(s == 0)
            std::cout << "Soongsil";
        if(s == 1)
            std::cout << "Korea";
        if(s == 2)
            std::cout << "Hanyang";
    }
}