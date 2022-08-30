#include <iostream>

int main()
{
    int arr[26] = {};
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
        arr[(int)str[i] - 97]++;
    for(int i = 0; i < 26; i++)
        std::cout << arr[i] << " ";
}