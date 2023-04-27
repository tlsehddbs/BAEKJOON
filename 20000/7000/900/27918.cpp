#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, d = 0, p = 0;
    char tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if(std::abs(d - p) < 2)
        {
            if(tmp == 'D')
                d++;
            if(tmp == 'P')
                p++;
        }
    }
    std::cout << d << ":" << p;
}