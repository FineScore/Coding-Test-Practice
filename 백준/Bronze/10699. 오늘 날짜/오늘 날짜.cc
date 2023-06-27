#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timer = time(NULL);
    struct tm *t = localtime(&timer);
    int month = t->tm_mon + 1;

    if (month > 9)
    {
        cout << t->tm_year + 1900 << "-" << month << "-" << t->tm_mday << endl;
    }
    else
    {
        cout << t->tm_year + 1900 << "-"
             << "0" << month << "-" << t->tm_mday << endl;
    }

    return 0;
}
