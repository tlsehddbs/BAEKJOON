#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, tmp, cnt = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> tmp;
    if(n < 2)
        std::cout << "No";
    else
    {
        for(int i = 2; i <= n; i++)
            if(n % i == 0)
                cnt++;
        if(cnt == 1)
            std::cout << "Yes";
        else
            std::cout << "No";
    }
    
}