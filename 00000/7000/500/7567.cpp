#include <iostream>
#include <cstring>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int sum = 10;
    std::string str;
    std::cin >> str;

    for(int i = 1; i < str.length(); i++)
        (str[i] == str[i - 1]) ? sum += 5 : sum += 10;
    std::cout << sum;
}