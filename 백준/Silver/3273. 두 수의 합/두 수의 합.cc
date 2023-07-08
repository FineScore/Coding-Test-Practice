#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[100001];
    int inc[n];

    fill(arr, arr + 100000, 0);
    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        inc[i] = num;
        arr[num] = i + 1;
    }

    int x;
    cin >> x;
    int result = 0;

    for (size_t i = 0; i < n; i++)
    {
        int diff = x - inc[i];
        if (diff > 100000 || diff < 0)
            continue;

        if (arr[diff] > 0 && arr[inc[i]] < arr[diff])
        {
            result++;
        }
    }

    cout << result;
}