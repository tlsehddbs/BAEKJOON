#include <iostream>

int main()
{
    int cnt = 0;
    std::string str;
    char arr[6] = "aeiou";
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
        for(int j = 0; j < 5; j++)
            if(str[i] == arr[j])
            {
                cnt++;
                break;
            }
    std::cout << cnt;
}