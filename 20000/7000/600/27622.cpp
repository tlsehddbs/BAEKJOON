#include <iostream>

int main()
{
    int n, arr[1001] = {}, tmp, err = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if(tmp < 0)
        {
            if(arr[tmp * -1] == 0)
                err++;
        }
        else
            arr[tmp]++;
        
    }
    std::cout << err;
}