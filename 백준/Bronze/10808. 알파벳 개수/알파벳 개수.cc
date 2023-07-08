#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    size_t size = s.size();

    int al[26];

    fill(al, al + 26, 0);

    for (size_t i = 0; i < size; i++)
    {
        int idx = s[i] - 97;
        al[idx]++;
    }

    for (size_t i = 0; i < 26; i++)
    {
        cout << al[i] << " ";
    }
}