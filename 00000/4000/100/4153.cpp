#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int a, b, c;
    while(true)
    {
        std::cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            return 0;
        a *= a;
        b *= b;
        c *= c;
        std::cout << (a + b == c || a + c == b || b + c == a ? "right\n" : "wrong\n");
    }
}