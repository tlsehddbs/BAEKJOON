#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for(int i = n; i >= 0; i--)
    {
        if(i == 0)
        {
		    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            if(n != 1) 
                std::cout << "Go to the store and buy some more, " << n << " bottles of beer on the wall.";
            else 
                std::cout << "Go to the store and buy some more, " << n << " bottle of beer on the wall.";
            return 0;
        }
        if(i == 1)
        {
            std::cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
            std::cout << "Take one down and pass it around, no more bottles of beer on the wall.\n\n";
            continue;
        }
        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
        if(i - 1 != 1) 
            std::cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n\n";
        else 
            std::cout << "Take one down and pass it around, " << i - 1 << " bottle of beer on the wall.\n\n";
    }
}