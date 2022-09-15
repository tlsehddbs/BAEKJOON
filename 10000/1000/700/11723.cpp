#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int m, arr[21] = {}, tmp;
    std::string str;
    std::cin >> m;
    for(int i = 0; i < m; i++)
    {
        std::cin >> str;
        if(str == "add")
        {
            std::cin >> tmp;
            arr[tmp] = 1;
        }
        if(str == "remove")
        {
            std::cin >> tmp;
            arr[tmp] = 0;
        }
        if(str == "check")
        {
            std::cin >> tmp;
            std::cout << arr[tmp] << "\n";
        }
        if(str == "toggle")
        {
            std::cin >> tmp;
            if(arr[tmp] == 1)
                arr[tmp] = 0;
            else
                arr[tmp] = 1;
        }
        if(str == "all")
            for(int j = 1; j <= 20; j++)
                arr[j] = 1;
        if(str == "empty")
            for(int j = 1; j <= 20; j++)
                arr[j] = 0;
    }
}