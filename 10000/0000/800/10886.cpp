#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, tmp, c = 0, nc = 0;
    
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        (tmp == 1) ? c++ : nc++;
    }

    std::cout << ((c > nc) ? "Junhee is cute!" : "Junhee is not cute!");
}