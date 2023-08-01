#include <bits/stdc++.h>

using namespace std;

int flo[1000000];
bool check[1000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    int btn[2] = {u, -d};

    if (s == g)
    {
        cout << 0;
        return 0;
    }

    queue<int> Q;
    Q.push(s - 1);

    while (!Q.empty())
    {
        if (d == 0 && s > g)
            break;
        if (u == 0 && s < g)
            break;

        auto cur = Q.front();
        check[cur] = true;
        Q.pop();

        for (int i = 0; i < 2; i++)
        {
            if (btn[i] == 0)
                continue;

            int mov = cur + btn[i];

            if (mov < 0 || mov >= f)
                continue;
            if (check[mov])
                continue;

            flo[mov] = flo[cur] + 1;
            if (mov == g - 1)
            {
                cout << flo[mov];
                return 0;
            }
            check[mov] = true;
            Q.push(mov);
        }
    }

    cout << "use the stairs";
}
