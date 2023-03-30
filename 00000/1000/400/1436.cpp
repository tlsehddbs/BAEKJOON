#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);

    int n, ans = 665, cnt = 0;
    std::string str;
    std::cin >> n;
    while(cnt != n)
    {
        ans++;
        str = std::to_string(ans);
        if(str.find("666") != std::string::npos)
            cnt++;
    }
    std::cout << ans;
}