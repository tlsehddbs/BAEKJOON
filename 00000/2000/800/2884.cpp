#include <iostream>

int main()
{
    int hh, mm, t;
    std::cin >> hh >> mm;

    mm -= 45;
	if (mm < 0) 
    {
		mm += 60;
		hh -= 1;

		if (hh < 0) hh = 23;
	}
    std::cout << hh << " " << mm;
}