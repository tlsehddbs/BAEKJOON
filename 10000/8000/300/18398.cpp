#include <iostream>

int main()
{
    int t, n, ai, bi;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> ai >> bi;
            std::cout << ai + bi << " " << ai * bi << "\n";
        }
    }
}