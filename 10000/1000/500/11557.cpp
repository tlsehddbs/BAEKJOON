#include <iostream>

int main()
{
    int n, s, l, max = -1;
    std::string str, sch;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> s;
        for(int j = 0; j < s; j++)
        {
            std::cin >> str >> l;
            if(l > max)
            {
                max = l;
                sch = str;
            }
        }
        std::cout << sch << "\n";
    }
}