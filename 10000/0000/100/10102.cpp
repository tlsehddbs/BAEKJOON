#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int v, a = 0, b = 0;
    char tmp;

    std::cin >> v;
    
    for(int i = 0; i < v; i++)
    {
        std::cin >> tmp;
        if(tmp == 'A') a++;
        if(tmp == 'B') b++;
    }
    if(a == b) 
        std::cout << "Tie";
    else 
        std::cout << ((a > b) ? "A" : "B");
}