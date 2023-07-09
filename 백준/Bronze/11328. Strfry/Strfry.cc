#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ab[26];
    int ab2[26];
    bool clear = 1;
    fill(ab, ab + 26, 0);
    fill(ab2, ab2 + 26, 0);

    for (size_t i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "Impossible"
                 << "\n";
            continue;
        }

        for (size_t j = 0; j < s1.size(); j++)
        {
            ab[s1[j] - 97]++;
        }
        for (size_t j = 0; j < s2.size(); j++)
        {
            ab2[s2[j] - 97]++;
        }
        for (size_t j = 0; j < 26; j++)
        {
            if (ab[j] != ab2[j])
            {
                cout << "Impossible"
                     << "\n";
                clear = 0;
                break;
            }
        }

        if (clear)
        {
            cout << "Possible"
                 << "\n";
        }

        clear = 1;
        fill(ab, ab + 26, 0);
        fill(ab2, ab2 + 26, 0);
    }
}