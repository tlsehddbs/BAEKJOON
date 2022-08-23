#include <iostream>

int main()
{
    int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0, ax = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        if(x == 0 || y == 0)
            ax++;
        else
            (x > 0) ? ((y > 0) ? q1++ : q4++) : ((y > 0) ? q2++ : q3++);
    }
    std::cout << "Q1: " << q1 << "\nQ2: " << q2 << "\nQ3: " << q3 << "\nQ4: " << q4 << "\nAXIS: " << ax;
}