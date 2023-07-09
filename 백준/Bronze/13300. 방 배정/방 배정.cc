#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int man[7];
    int woman[7];

    fill(man, man + 7, 0);
    fill(woman, woman + 7, 0);

    for (size_t i = 0; i < n; i++)
    {
        int sex, grade;
        cin >> sex >> grade;

        if (sex)
            man[grade]++;
        else
            woman[grade]++;
    }

    int room = 0;

    for (size_t i = 1; i <= 6; i++)
    {
        room += man[i] / k;
        room += woman[i] / k;

        if (man[i] % k > 0)
        {
            room++;
        }
        if (woman[i] % k > 0)
        {
            room++;
        }
    }

    cout << room;
}