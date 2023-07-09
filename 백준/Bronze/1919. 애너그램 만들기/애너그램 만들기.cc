#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    int alpha1[27];
    int alpha2[27];
    fill(alpha1, alpha1 + 27, 0);
    fill(alpha2, alpha2 + 27, 0);

    for (size_t i = 0; i < s1.size(); i++)
    {
        alpha1[s1[i] - 97]++;
    }

    for (size_t i = 0; i < s2.size(); i++)
    {
        alpha2[s2[i] - 97]++;
    }

    int result = 0;

    for (size_t i = 0; i < 27; i++)
    {
        if (alpha1[i] != alpha2[i])
        {
            result += alpha1[i] > alpha2[i] ? alpha1[i] - alpha2[i] : alpha2[i] - alpha1[i];
        }
    }

    cout << result;
}