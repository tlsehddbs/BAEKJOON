#include <iostream>

int main()
{
    int arr[4], sum = 0;
    for(int i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum / 60 << "\n" << sum % 60;
}