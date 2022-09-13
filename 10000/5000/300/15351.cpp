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
        int p = 0;
        std::getline(std::cin, str);
        for(int j = 0; j < str.length(); j++)
            if(str[j] != ' ')
                p += str[j] - 64;
        if(p == 100)
            std::cout << "PERFECT LIFE\n";
        else
            std::cout << p << "\n";
    }
}