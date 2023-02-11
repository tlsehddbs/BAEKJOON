#include <iostream>

int main()
{
	int n[8] = {}, a = 0, d = 8;
	for(int i = 0; i < 8; i++)
    {
		std::cin >> n[i];
		if(n[i] == i + 1)
			a++;
		else if(n[i] == 8 - i)
			d--;
	}
	if(a == 8) 
        std::cout << "ascending";
	else if(d == 0) 
        std::cout << "descending";
	else 
        std::cout << "mixed";
}