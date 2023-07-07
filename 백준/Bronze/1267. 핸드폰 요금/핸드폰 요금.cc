#include <bits/stdc++.h>

using namespace std;

int youngsik(vector<int> times, size_t size)
{
    int won = 0;
    for (size_t i = 0; i < size; i++)
    {
        while (times[i] >= 30)
        {
            won += 10;
            times[i] -= 30;
        }

        if (times[i] >= 0 && times[i] < 30)
        {
            won += 10;
        }
    }

    return won;
}

int minsik(vector<int> times, size_t size)
{
    int won = 0;
    for (size_t i = 0; i < size; i++)
    {
        while (times[i] >= 60)
        {
            won += 15;
            times[i] -= 60;
        }

        if (times[i] >= 0 && times[i] < 60)
        {
            won += 15;
        }
    }

    return won;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        int time;
        cin >> time;
        v.push_back(time);
    }

    int y = youngsik(v, n);
    int m = minsik(v, n);

    if (y < m)
    {
        cout << "Y"
             << " " << y;
    }
    else if (y > m)
    {
        cout << "M"
             << " " << m;
    }
    else
    {
        cout << "Y"
             << " "
             << "M"
             << " " << y;
    }
}