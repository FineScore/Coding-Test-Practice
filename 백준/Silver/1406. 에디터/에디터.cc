#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    list<char> in;

    for (char c : s)
    {
        in.push_back(c);
    }

    auto cur = in.end();

    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        char cmd;
        cin >> cmd;

        if (cmd == 'P')
        {
            char w;
            cin >> w;

            in.insert(cur, w);
        }
        else if (cmd == 'L')
        {
            if (cur == in.begin())
                continue;
            cur--;
        }
        else if (cmd == 'D')
        {
            if (cur == in.end())
                continue;
            cur++;
        }
        else if (cmd == 'B')
        {
            if (cur == in.begin())
                continue;
            auto tx = cur;
            in.erase(--cur);
            cur = tx;
        }
    }

    for (auto c : in)
    {
        cout << c;
    }
}