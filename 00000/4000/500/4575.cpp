#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    while(true)
    {
    rep:
        int arr[26] = {};
        std::getline(std::cin, str);
        if(str == "END")
            return 0;
        for(int i = 0; i < str.length(); i++)
            if (str[i] != ' ')
                arr[str[i] - 65]++;
        for(int i = 0; i < 26; i++)
            if (arr[i] > 1)
                goto rep;
        std::cout << str << "\n";
    }
}