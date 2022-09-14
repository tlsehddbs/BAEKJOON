#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(90 <= a)
        cout << "A\n";
    else if(80 <= a)
        cout << "B\n";
    else if(70 <= a)
        cout << "C\n";
    else if(60 <= a)
        cout << "D\n";
    else
        cout << "F\n";
}