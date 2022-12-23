#include <iostream>
int main()
{
    std::string t, color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white" };
    int mem[3];
    long long r = 0;

    for (int i = 0; i < 3; ++i) {
        std::cin >> t;
        for (int j = 0; j < 10; ++j) {
            if (color[j] == t) mem[i] = j;
        }
    }

    r = mem[0] * 10 + mem[1];
    for (int i = 0; i < mem[2]; ++i) r *= 10;
    std::cout << r << std::endl;
}