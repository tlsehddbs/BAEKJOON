#include <iostream>

int main()
{
    std::string str, tmp;
    int n, cnt = 0;
    std::cin >> str >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if(str == tmp)
            cnt++;
    }
    std::cout << cnt;
}