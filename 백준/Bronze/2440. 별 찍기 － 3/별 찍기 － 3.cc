#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}