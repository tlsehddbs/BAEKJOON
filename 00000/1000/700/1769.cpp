#include <iostream>

int main()
{
    int cnt = 0, res;
    std::string num;
    std::cin >> num;
    while(num.length() != 1)
    {
        res = 0;
        for(int i = 0; i < num.length(); i++)
            res += (int)num[i] - 48;
        num = std::to_string(res);
        cnt++;
    }
    std::cout << cnt << "\n" << (std::stoi(num) % 3 == 0 ? "YES\n" : "NO\n");
}