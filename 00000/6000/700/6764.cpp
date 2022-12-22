#include <iostream>

int main()
{
    int n[4] = {};
    for(int i = 0; i < 4; i++) 
        std::cin >> n[i];
    if(n[0] > n[1] && n[1] > n[2] && n[2] > n[3]) 
        std::cout << "Fish Diving";
    else if(n[0] < n[1] && n[1] < n[2] && n[2] < n[3]) 
        std::cout << "Fish Rising";
    else if(n[0] == n[1] && n[1] == n[2] && n[2] == n[3]) 
        std::cout << "Fish At Constant Depth";
    else 
        std::cout << "No Fish";
}
