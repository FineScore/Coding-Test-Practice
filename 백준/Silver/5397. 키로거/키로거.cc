#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        list<char> password;
        auto cur = password.end();

        string s;
        cin >> s;

        for (char c : s)
        {

            if (c == '<')
            {
                if (cur == password.begin())
                {
                    continue;
                }

                cur--;
            }
            else if (c == '>')
            {
                if (cur == password.end())
                {
                    continue;
                }

                cur++;
            }
            else if (c == '-')
            {
                if (cur == password.begin())
                {
                    continue;
                }

                auto tx = cur;
                password.erase(--cur);
                cur = tx;
            }
            else
            {
                password.insert(cur, c);
            }
        }

        for (auto c : password)
        {
            cout << c;
        }

        cout << "\n";
    }
}