#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    char arr[11] = "AEIOUaeiou";
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; i++)
    {
        int cnt = 0, wcnt = 0;
        std::getline(std::cin, str);
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == ' ')
                wcnt++;
            for(int k = 0; k < 10; k++)
                if(str[j] == arr[k])
                    cnt++;
        }
        std::cout << str.length() - wcnt - cnt << " " << cnt << "\n";
    }
}