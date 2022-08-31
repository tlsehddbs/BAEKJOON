#include <iostream>

int main()
{
    int arr[26] = {}, max = 0, maxidx = 0, eq = 0;
    std::string str;
    std::cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] < 97)
            arr[str[i] - 65]++;
        else
            arr[str[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxidx = i;
        }
    }

    for(int i = 0; i < 26; i++)
        if(arr[i] == max)
            eq++;

    if(eq > 1)
        std::cout << "?";
    else
        std::cout << (char)(maxidx + 65);
}