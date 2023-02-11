#include <iostream>

int main()
{
    int num[10] = {}, max = 0, tmp;
    std::string n;
    std::cin >> n;
    for(int i = 0; i < n.length(); i++)
        num[n[i] - '0']++;
    tmp = num[6] + num[9] + 1;
    for(int i = 0; i < 10; i++)
    {
        if(i == 6 || i == 9)
            max = tmp / 2 > max ? tmp / 2 : max;
        else
            max = num[i] > max ? num[i] : max;
    }
    std::cout << max;
}