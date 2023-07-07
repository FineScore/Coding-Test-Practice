#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    for (size_t i = 1; i <= 20; i++)
    {
        v.push_back(i);
    }

    for (size_t i = 0; i < 10; i++)
    {
        int start;
        int end;
        cin >> start;
        cin >> end;

        reverse(&v[start] - 1, &v[end]);
    }

    for (size_t i = 0; i < 20; i++)
    {
        cout << v[i] << " ";
    }
}