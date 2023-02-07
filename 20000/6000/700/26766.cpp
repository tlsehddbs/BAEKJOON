#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cout << " @@@   @@@ \n@   @ @   @\n@    @    @\n@         @\n @       @ \n  @     @  \n   @   @   \n    @ @    \n     @     \n";
}