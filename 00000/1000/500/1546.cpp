#include <iostream>

int main() 
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);

	int n, max = -1;
	double sum = 0, a;
	std::cin >> n;
	for(int i = 0; i < n; i++) 
    {
		std::cin >> a;
		sum += a;
		if(max < a)
			max = a;
	}
	std::cout << ((sum / max) / n) * 100;
}