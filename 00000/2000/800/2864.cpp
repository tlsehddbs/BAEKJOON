#include <iostream>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    for(int i = 0; i < a.length(); i++)
        if(a[i] == '6')
            a[i] = '5';
    for(int i = 0; i < b.length(); i++)
        if(b[i] == '6')
            b[i] = '5';
    std::cout << std::stoi(a) + std::stoi(b) << " ";
    for(int i = 0; i < a.length(); i++)
        if(a[i] == '5')
            a[i] = '6';
    for(int i = 0; i < b.length(); i++)
        if(b[i] == '5')
            b[i] = '6';
    std::cout << std::stoi(a) + std::stoi(b) << " ";
}