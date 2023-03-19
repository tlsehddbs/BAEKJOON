#include <iostream>
#include <ctime>

int main()
{
    std::time_t time;
    struct tm *t;
    time = std::time(NULL);
    t = gmtime(&time);
    std::cout << t->tm_year + 1900 << "\n" << t->tm_mon + 1 << "\n" << t->tm_mday;
}