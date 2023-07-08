#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (size_t i = 1; i <= 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (size_t j = 1; j < i; j++)
            {
                cout << " ";
            }
            for (size_t j = 1; j <= -2 * (i - 1) + (2 * n - 1); j++)
            {
                cout << "*";
            }
        }
        else if (i > n)
        {
            for (size_t j = i - n; j < n - 1; j++)
            {
                cout << " ";
            }
            for (size_t j = 1; j <= 2 * (i - n) + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (size_t i = 1; i <= n - 1; i++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << "\n";
    }
}