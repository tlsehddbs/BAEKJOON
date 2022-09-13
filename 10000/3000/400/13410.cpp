#include <iostream>
#include <algorithm>

int main()
{
    int n, k, max = 0, tmp;
    std::cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        std::string str = std::to_string(n * i);
        std::reverse(str.begin(), str.end());
        tmp = std::stoi(str);
        if(tmp > max)
            max = tmp;
    }
    std::cout << max;
}