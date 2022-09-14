#include <iostream>

int main()
{
    std::string str;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cin >> str;
    for(int i = 0; i < alphabet.length(); i++)
        std::cout << (int)str.find(alphabet[i]) << " ";
}