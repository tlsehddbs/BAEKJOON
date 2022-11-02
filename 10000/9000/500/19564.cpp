#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    std::string str;
    std::cin >> str;
    int cnt = 1;
    for(int i = 1; i < str.length(); i++)
        if((int)str[i] <= (int)str[i - 1])
            cnt++;
    std::cout << cnt;
}