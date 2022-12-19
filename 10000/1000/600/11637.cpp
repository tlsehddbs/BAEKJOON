#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::vector<int> v;
        int tmp, max = 0, maxidx = 0, tot = 0;
        std::cin >> n;
        for(int j = 0; j < n; j++)
        {
            std::cin >> tmp;
            v.push_back(tmp);
            tot += tmp;
            if(tmp > max)
            {
                max = tmp;
                maxidx = j + 1;
            }
        }
        std::sort(v.rbegin(), v.rend());
        if(v[0] == v[1])
            std::cout << "no winner\n";
        else
            std::cout << (max > tot / 2 ? "majority winner " : "minority winner ") << maxidx << "\n";
    }
}