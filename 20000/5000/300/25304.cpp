#include <iostream>

int main()
{
    int bill, n, a, b, sum = 0;
    std::cin >> bill >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        sum += a * b;
    }
    std::cout << (bill == sum ? "Yes" : "No");
}