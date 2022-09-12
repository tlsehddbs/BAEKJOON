#include <iostream>

int main()
{
    std::string a, b;
    char op;
    std::cin >> a >> op >> b;
    if(op == '*')
    {
        std::cout << 1;
        for(int i = 0; i < a.length() + b.length() - 2; i++)
            std::cout << 0;
    }
    else
    {
        if(a.length() == b.length())
        {
            std::cout << 2;
            for(int i = 0; i < a.length() - 1; i++)
                std::cout << 0;
        }
        else
        {
            int am = std::max(a.length(), b.length());
            int bm = std::min(a.length(), b.length());
            for(int i = am; i > 0; i--)
            {
                if(i == am || i == bm)
                    std::cout << 1;
                else
                    std::cout << 0;
            }
        }
    }
}