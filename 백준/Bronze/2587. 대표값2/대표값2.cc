#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> list;
    int avg = 0;

    for (size_t i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        avg += num;
        list.push_back(num);
    }

    sort(list.begin(), list.end());

    avg /= 5;

    cout << avg << "\n";
    cout << list[2] << "\n";
}