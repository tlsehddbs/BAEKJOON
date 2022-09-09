#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, grade;
    std::string name, c;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> name >> grade;
        if(grade >= 97)         c = "A+";
        else if(grade >= 90)    c = "A";
        else if(grade >= 87)    c = "B+";
        else if(grade >= 80)    c = "B";
        else if(grade >= 77)    c = "C+";
        else if(grade >= 70)    c = "C";
        else if(grade >= 67)    c = "D+";
        else if(grade >= 60)    c = "D";
        else                    c = "F";
        std::cout << name << " " << c << "\n";
    }
}