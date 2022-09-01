#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();

    for(int i = 0; i < n; i++)
    {
        std::getline(std::cin, str);
        std::istringstream ss(str);
        std::string substr;
        std::vector<std::string> v;

        while(std::getline(ss, substr, ' '))
            v.push_back(substr);
        std::reverse(v.begin(), v.end());
        std::cout << "Case #" << i + 1 << ": ";
        for(auto res : v)
            std::cout << res << " ";
        std::cout << "\n";
    }
}