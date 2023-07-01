#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    istringstream iss(input);
    string buff;
    long long sum = 0;

    while (getline(iss, buff, ' '))
    {
        sum += stoll(buff);
    }

    cout << sum << endl;
    return 0;
}