#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int xx = stoi(x);
    int yy = stoi(y);
    int a = xx + yy;
    string aa = to_string(a);
    reverse(aa.begin(), aa.end());
    int b = stoi(aa);
    cout << b;
}