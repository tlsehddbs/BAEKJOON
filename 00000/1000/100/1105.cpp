#include <iostream>

int main()
{
    int cnt = 0;
    std::string l, r;
    std::cin >> l >> r;
    if(l.length() != r.length())
    {
        std::cout << 0;
        return 0;
    }
    for(int i = 0; i < l.length(); i++)
        if(l[i] == r[i] && l[i] == '8')
            cnt++;
        else if(l[i] != r[i])
            break;
    std::cout << cnt;
}