#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, n, tmp;
    std::cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        std::cin >> n;
        std::vector<std::pair<int, int> > v(2 * n);
        for(int i = 0; i < 2 * n; i++)
        {
            std::cin >> v[i].first;
            v[i].second = 0;
        }
        for (int i = 0; i < 2 * n; i++) 
        {
            if (v[i].second == 0)
            {
                for (int j = i + 1; j < 2 * n; j++)
                {
                    if (v[j].second == 0) 
                    {
                        tmp = v[j].first * 0.75;
                        if (v[i].first == tmp) 
                        {
                            v[j].second = 1;
                            break;
                        }
                        else if (tmp > v[i].first)
                            break;
                    }
                }
            }
        }        
        std::cout << "Case #" << tc + 1 << ": ";
        for(int i = 0; i < 2 * n; i++)  
            if(v[i].second == 0)
                std::cout << v[i].first << " ";
        std::cout << "\n";
    }
}