#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, r = 0, ic = 0, tmp;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        r += tmp;
        if(tmp == 0)
            ic++;
    }
    std::cout << (ic * 2 >= n ? "INVALID" : (r > 0 ? "APPROVED" : "REJECTED"));
}