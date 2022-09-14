#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int sum = 0, min = 101, tmp;
        for(int j = 0; j < 7; j++)
        {
            std::cin >> tmp;
            if(tmp % 2 == 0)
            {
                sum += tmp;
                if(tmp < min)
                    min = tmp;
            }
        }
        std::cout << sum << " " << min << "\n";
    }
}