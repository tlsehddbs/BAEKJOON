#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, arr[1001];
    cin >> c;

    for(int i = 0; i < c; i++)
    {
        int n, cnt = 0;
        float sum = 0;
        cin >> n;

        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }

        for(int j = 0; j < n; j++)
            if(arr[j] > (sum / n))
                cnt++;

        cout<<fixed;
        cout.precision(3);
        cout << (float)cnt / n * 100 << "%\n";
    }
}