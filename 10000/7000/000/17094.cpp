#include <iostream>

int main()
{
    int s, cnt1 = 0, cnt2 = 0;
    std::string str;
    std::cin >> s >> str;
    for(int i = 0; i < str.length(); i++)
        str[i] == '2' ? cnt1++ : cnt2++;
    if(cnt1 == cnt2)
        std::cout << "yee";
    else
        std::cout << (cnt1 > cnt2 ? "2" : "e");
}