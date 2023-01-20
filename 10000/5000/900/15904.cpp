#include <iostream>

int main()
{
    int idx = 0;
    char arr[4] = { 'U', 'C', 'P', 'C'};
    std::string str;
    std::getline(std::cin, str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == arr[idx])
            idx++;
        if(idx == 4)
        {
            std::cout << "I love UCPC";
            return 0;
        }
    }
    std::cout << "I hate UCPC";
}