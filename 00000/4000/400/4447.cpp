#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; i++)
    {
        int g = 0, b = 0;
        std::getline(std::cin, str);
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'g' || str[j] == 'G')  g++;
            if(str[j] == 'b' || str[j] == 'B')  b++;
        }
        std::cout << str << " is ";
        if(g == b)
            std::cout << "NEUTRAL\n";
        else
            std::cout << (g > b ? "GOOD\n" : "A BADDY\n");
    }
}