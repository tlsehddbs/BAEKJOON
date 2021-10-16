#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if(90 <= a && a <= 100)
        cout << "A" << endl;
    if(80 <= a && a <= 89)
        cout << "B" << endl;
    if(70 <= a && a <= 79)
        cout << "C" << endl;
    if(60 <= a && a <= 69)
        cout << "D" << endl;
    if(0 <= a && a <= 59)
        cout << "F" << endl;

    return 0;
}