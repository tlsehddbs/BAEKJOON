#include <iostream>

int main()
{
    std::string str, c[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
    int m[3];
    long long int r = 0;
    for(int i = 0; i < 3; ++i) 
    {
        std::cin >> str;
        for(int j = 0; j < 10; j++)
            if (str == c[j])
                m[i] = j;
    }
    r = m[0] * 10 + m[1];
    for(int i = 0; i < m[2]; i++)
        r *= 10;
    std::cout << r;
}