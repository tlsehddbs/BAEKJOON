#include <iostream>
#include <algorithm>

int main()
{
	int a, b;
	std::string s1, s2;
	std::cin >> s1 >> s2;

	std::reverse(s1.begin(), s1.end());
	std::reverse(s2.begin(), s2.end());
	a = std::stoi(s1);
	b = std::stoi(s2);
	std::cout << (a > b ? a : b);
}