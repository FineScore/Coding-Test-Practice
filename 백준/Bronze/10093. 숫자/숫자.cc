#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long one, two;
    int size;
    cin >> one;
    cin >> two;

    if (one > two)
    {
        size = (one - two) - 1;
        cout << size << "\n";
        for (size_t i = two + 1; i <= one - 1; i++)
        {
            cout << i << " ";
        }
    }
    else if (one < two)
    {
        size = (two - one) - 1;
        cout << size << "\n";
        for (size_t i = one + 1; i <= two - 1; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        size = 0;
        cout << size << "\n";
    }
}