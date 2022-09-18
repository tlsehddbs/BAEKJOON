#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, sum = 0, arr[8001] = {}, carr[500001] = {}, min = 4001, max = -4001, arrmax = 0, cnt = 0, mos;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> carr[i];
        sum += carr[i];
        arr[carr[i] + 4000]++;
        if(carr[i] > max)   max = carr[i];
        if(carr[i] < min)   min = carr[i];
    }
    std::sort(carr, carr + n);
    for(int i = 0; i < 8001; i++)
        if(arr[i] > arrmax)
            arrmax = arr[i];
    for(int i = 0; i < 8001; i++)
    {
        if(arr[i] == arrmax)
        {
            cnt++;
            mos = i - 4000;
        }
        if(cnt == 2)
            break;
    }
    std::cout << int(std::round(sum / (float)n)) << "\n" << carr[(n - 1) / 2] << "\n" << mos << "\n" << (min < 0 && max < 0 ? abs(min) - abs(max) : max - min);
}