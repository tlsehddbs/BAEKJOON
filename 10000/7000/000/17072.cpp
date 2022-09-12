#include <iostream>

void print(int r, int g, int b)
{
    int i = 2126 * r + 7152 * g + 722 * b;
    if(i >= 2040000)        std::cout << ".";
    else if(i >= 1530000)   std::cout << "-";
    else if(i >= 1020000)   std::cout << "+";
    else if(i >= 510000)    std::cout << "o";
    else                    std::cout << "#";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, r, g, b;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> r >> g >> b;
            print(r, g, b);
        }
        std::cout << "\n";
    }
}