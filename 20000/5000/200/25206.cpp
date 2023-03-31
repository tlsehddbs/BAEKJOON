#include <iostream>
#include <map>

int main()
{
    double s, sum = 0, res = 0;
    std::map<std::string, double> m = { { "A+", 4.5 }, { "A0", 4.0 }, { "B+", 3.5 }, { "B0", 3.0 }, { "C+", 2.5 }, { "C0", 2.0 }, { "D+", 1.5 }, { "D0", 1.0 }, { "F", 0.0 } };
    std::string name, g;
    for(int i = 0; i < 20; i++)
    {
        std::cin >> name >> s >> g;
        if(g != "P")
        {
            sum += s;
            res += s * m[g];
        }
    }
    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << res / sum;
}