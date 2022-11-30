#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, tmp;
    std::cin >> n;
    while(std::cin >> tmp)
    {
        if(n > tmp)
        {
            std::cout << "Bad";
            return 0;
        }
        else
            n = tmp;
    }
    std::cout << "Good";
}