#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int cnt = 1;

    if(str.empty())
        cout << "0";

    for(int i = 0; i < str.length(); i++)
        if(str[i] == ' ')
            cnt++;
    
    if(str[0] == ' ') cnt--;
    if(str[str.length()-1] == ' ') cnt--;
    cout << cnt;
}