#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, r, e, c;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> r >> e >> c;
        if(r == e - c) std::cout << "does not matter\n";
        if(r < e - c)  std::cout << "advertise\n";
        if(r > e - c)  std::cout << "do not advertise\n"; 
    }
}