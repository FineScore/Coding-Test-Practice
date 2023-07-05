#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (size_t i = 0; i < 3; i++)
    {
        int one = 0;
        for (size_t j = 0; j < 4; j++)
        {
            int check;
            cin >> check;
            if (check == 1)
                one++;
        }
        if (one == 0)
        {
            cout << "D"
                 << "\n";
        }
        else if (one == 1)
        {
            cout << "C"
                 << "\n";
        }
        else if (one == 2)
        {
            cout << "B"
                 << "\n";
        }
        else if (one == 3)
        {
            cout << "A"
                 << "\n";
        }
        else if (one == 4)
        {
            cout << "E"
                 << "\n";
        }
    }
}