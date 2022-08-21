#include <iostream>

using namespace std;

int main()
{
    int n, min = 1000001, max = -1000001;
    int input;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input < min)
            min = input;
        if(input > max)
            max = input;
    }
    cout << min << " " << max;
}