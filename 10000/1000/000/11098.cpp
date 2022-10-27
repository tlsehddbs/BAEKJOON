#include <iostream>

int main()
{
    int n, p;
    std::string name, stmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int price = 0, itmp;
        std::cin >> p;
        for(int j = 0; j < p; j++)
        {
            std::cin >> itmp >> stmp;
            if(itmp > price)
            {
                price = itmp;
                name = stmp;
            }
        }
        std::cout << name << "\n";
    }
}