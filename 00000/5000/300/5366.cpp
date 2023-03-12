#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int cnt = 0;
    std::string str;
    std::vector<std::string> sv;
    std::unordered_map<std::string, int> m;
    while(true)
    {
        std::getline(std::cin, str);
        if(str == "0")
        {
            for(int i = 0; i < sv.size(); i++)
            {
                std::cout << sv[i] << ": " << m[sv[i]] << "\n";
                cnt += m[sv[i]];
            }
            std::cout << "Grand Total: " << cnt;
            return 0;
        }
        if(m[str] == 0)
            sv.push_back(str);
        m[str]++;
    }
}