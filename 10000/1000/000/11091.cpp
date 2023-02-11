#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; i++)
    {
        int tmp, arr[26] = {}, arrcnt = 0;
        std::getline(std::cin, str);
        std::transform(str.begin(), str.end(), str.begin(), ::towlower);
        for(int j = 0; j < str.length(); j++)
        {
            tmp = str[j] - 97;
            arr[tmp]++;
        }
        for(int j = 0; j < 26; j++)
        {
            if(arr[j] != 0)
                arrcnt++;
        }
        if(arrcnt == 26)
            std::cout << "pangram\n";
        else
        {
            std::cout << "missing ";
            for(int j = 0; j < 26; j++)
                if(arr[j] == 0)
                    std::cout << char(j + 97);
            std::cout << "\n";
        }
    }
}