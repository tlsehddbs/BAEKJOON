#include <iostream>

int main()
{
    int n, a, r, p1, p2;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> p1 >> r >> p2;
        std::cout << (a * p2 > r * r * 3.141592 * p1 ? "Slice of pizza\n" : "Whole pizza\n");
    } 
}