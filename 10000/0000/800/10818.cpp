#include <iostream>

int main()
{
    int n, min = 1000001, max = -1000001;
    int input;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> input;
        if(input < min) 
            min = input;
        if(input > max) 
            max = input;
    }
    std::cout << min << " " << max;
}