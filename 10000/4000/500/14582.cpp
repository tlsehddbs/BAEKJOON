#include <iostream>

int main()
{
    bool a = false;
    int j[10] = {}, s[10] = {}, jr = 0, sr = 0;
    for(int i = 0; i < 9; i++)
        std::cin >> j[i];
    for(int i = 0; i < 9; i++)
        std::cin >> s[i];
    for(int i = 0; i < 9; i++)
    {
        jr += j[i];
        if(jr > sr)
            a = true;
        sr += s[i];
    }
    std::cout << (a ? "Yes" : "No");
}