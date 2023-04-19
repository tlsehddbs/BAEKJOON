#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n + 1, 0);
    for(int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + 1;
		if(i % 3 == 0) 
            v[i] = std::min(v[i / 3] + 1, v[i]);
		if(i % 2 == 0)
            v[i] = std::min(v[i / 2] + 1, v[i]);
    }
    std::cout << v[n];
}