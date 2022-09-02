#include <iostream>

int main()
{
    int pos1, pos2;
    std::string a, b;
    std::cin >> a >> b;

    for(int i = 0; i < a.length(); i++)
        for(int j = 0; j < b.length(); j++)
            if(a[i] == b[j])
            {
                pos1 = i;
                pos2 = j;
                goto aa;
            }
    aa:
    for(int i = 0; i < b.length(); i++)
    {
        for(int j = 0; j < a.length(); j++)
        {
            if(i == pos2)
                std::cout << a[j];
            else if(j == pos1)
                std::cout << b[i];
            else
                std::cout << ".";
        }
        std::cout << "\n";
    }
}