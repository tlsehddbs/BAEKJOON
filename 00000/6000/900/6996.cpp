#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::string a, b;
        std::cin >> a >> b;
        std::cout << a << " & " << b;
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        std::cout << (a == b ? " are anagrams.\n" : " are NOT anagrams.\n");
    }
}