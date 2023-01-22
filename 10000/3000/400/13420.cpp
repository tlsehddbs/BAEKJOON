#include <iostream>

int main()
{
    long long int t, a, b, r, ans;
    char c, e;
    std::cin >> t;
    for(int i = 0 ; i < t; i++)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
        
        std::cin >> a >> c >> b >> e >> r;
        if(c == '+')
            ans = a + b;
        if(c == '-')
            ans = a - b;
        if(c == '*')
            ans = a * b;
        if(c == '/')
            ans = a / b;
        std::cout << (ans == r ? "correct\n" : "wrong answer\n");
    }
}