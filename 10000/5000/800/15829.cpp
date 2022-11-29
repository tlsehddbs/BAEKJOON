#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int l;
    std::string str;
    long long int ans = 0, r = 1;
    std::cin >> l >> str;
    for(int i = 0; i < str.length(); i++)
    {
        ans += (str[i] - 'a' + 1) * r % 1234567891;
        r = (r * 31) % 1234567891;
    }
    std::cout << ans;
}