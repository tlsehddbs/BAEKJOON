#include <iostream>

int main()
{
    int n, num = 1, cnt = 0;
    std::string l, tmp;
    std::cin >> n >> l;
    while(true)
    {
        tmp = std::to_string(num);
        if(tmp.find(l) == std::string::npos)
        {
            cnt += 1;
            if(cnt == n)
            {
                std::cout << num;
                return 0;
            }
            num += 1;
        }
        else
            num += 1;
    }
}