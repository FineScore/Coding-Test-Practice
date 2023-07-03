#include <iostream>
#include <string>

using namespace std;

int main()
{
    string voca;
    cin >> voca;

    for (size_t i = 0; i < voca.size(); i++)
    {
        if ('a' <= voca[i] && voca[i] <= 'z')
        {
            voca[i] -= 32;
        }
        else
        {
            voca[i] += 32;
        }
    }

    cout << voca << endl;
}