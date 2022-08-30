#include <iostream>

int main()
{
    int num, cnt = 0, arr[5];
    std::cin >> num;
    for(int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
        if(arr[i] == num)
            cnt++;
    }
    std::cout << cnt;
}