#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int point = 0, sum = 0;
        std::cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'O')
                point++;
            else
                point = 0;
            sum += point;
        }
        std::cout << sum << "\n";
    }
}