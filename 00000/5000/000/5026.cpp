#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, a, b;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        if(str == "P=NP")
            std::cout << "skipped\n";
        else
        {
            a = std::stoi(str.substr(0, str.find('+')));
            b = std::stoi(str.substr(str.find('+') + 1));
            std::cout << a + b << "\n";
        }
    }
}