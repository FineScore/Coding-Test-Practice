#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int goodVoca = 0;

    for (size_t i = 0; i < n; i++)
    {
        string voca;
        cin >> voca;

        stack<char> st;
        for (auto s : voca)
        {
            if (st.empty() || st.top() != s)
            {
                st.push(s);
            }
            else
            {
                st.pop();
            }
        }

        if (st.empty())
        {
            goodVoca++;
        }
    }

    cout << goodVoca;
}