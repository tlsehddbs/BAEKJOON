#include <iostream>

int main()
{
    int a, b, c, nums[10] = {}, result;
    std::cin >> a >> b >> c;

    result = a * b * c;
    std::string str = std::to_string(result);

    for(int i = 0; i < str.length(); i++)
        nums[str[i] - '0']++;
    for(int i = 0; i < 10; i++)
        std::cout << nums[i] << "\n";
}