#include <bits/stdc++.h>
using namespace std;

int tomato[100][100][100];
int info[100][100][100];
int dx[8] = {1, 0, -1, 0, 0, 0};
int dy[8] = {0, 1, 0, -1, 0, 0};
int dz[8] = {0, 0, 0, 0, 1, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, h;
    cin >> m >> n >> h;
    queue<tuple<int, int, int>> Q;

    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int to;
                cin >> to;

                if (to == 1)
                {
                    Q.push({j, i, k});
                }

                if (to == 0)
                {
                    info[j][i][k] = -1;
                }

                tomato[j][i][k] = to;
            }
        }
    }

    while (!Q.empty())
    {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 8; dir++)
        {
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int nz = get<2>(cur) + dz[dir];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h)
                continue;
            if (info[nx][ny][nz] >= 0)
                continue;

            info[nx][ny][nz] = info[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({nx, ny, nz});
        }
    }

    int ans = 0;

    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (info[j][i][k] == -1)
                {
                    cout << "-1";
                    return 0;
                }

                ans = max(ans, info[j][i][k]);
            }
        }
    }

    cout << ans;
}