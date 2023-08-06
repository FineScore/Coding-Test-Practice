#include <bits/stdc++.h>

using namespace std;

char mapp[1001][1001];
int check[1001][1001][2];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string stat;
        cin >> stat;
        for (int j = 0; j < m; j++)
        {
            auto t = stat[j];
            mapp[i][j] = t;
        }
    }

    queue<tuple<int, int, int>> Q;
    Q.push({0, 0, 0});
    check[0][0][0] = 1;

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        if (get<0>(cur) == m - 1 && get<1>(cur) == n - 1)
        {
            cout << check[get<1>(cur)][get<0>(cur)][get<2>(cur)];
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = get<0>(cur) + dx[i];
            int ny = get<1>(cur) + dy[i];
            int wallBreak = get<2>(cur);

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (mapp[ny][nx] == '1' && wallBreak == 0 && check[ny][nx][wallBreak + 1] == 0)
            {
                Q.push({nx, ny, wallBreak + 1});
                check[ny][nx][wallBreak + 1] = check[get<1>(cur)][get<0>(cur)][wallBreak] + 1;
            }
            if (mapp[ny][nx] == '0' && check[ny][nx][wallBreak] == 0)
            {
                Q.push({nx, ny, wallBreak});
                check[ny][nx][wallBreak] = check[get<1>(cur)][get<0>(cur)][wallBreak] + 1;
            }
        }
    }

    cout << -1;
}