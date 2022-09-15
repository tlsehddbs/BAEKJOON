#include <iostream>

int main()
{
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int sum = 0, tmp;
        std::cin >> str;
        for(int j = str.length() - 1; j >= 0; j--)
        {
            if(j % 2 == 0)
            {
                tmp = str[j] - 48;
                tmp *= 2;
                if(tmp >= 10)
                    tmp = tmp / 10 + tmp % 10;
                str[j] = tmp + 48;
            }
            sum += str[j] - 48;
        }
        std::cout << (sum % 10 == 0 ? "T\n" : "F\n");
    }
}