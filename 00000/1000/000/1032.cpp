#include <iostream>

int main()
{
    int n;
    std::string str[51];
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> str[i];
    for (int i = 0; i < str[0].length(); i++) 
    {
		for (int j = 1; j < n; j++) 
			if (str[0][i] != str[j][i]) 
            {
				str[0][i] = '?';
				break;
			}
		std::cout << str[0][i];
	}
	std::cout << "\n";
}