#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	int n, max = -1;
	double sum = 0, a;

	cin >> n;

	for(int i = 0; i < n; i++) 
    {
		cin >> a;
		sum += a;

		if(max < a)
			max = a;
	}
    
	cout << ((sum / max) / n) * 100;
}