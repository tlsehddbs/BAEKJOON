#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, a;
    vector<int> arr(1001);

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.rbegin(), arr.rend());
    cout << arr[k - 1];
}