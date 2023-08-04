#include <bits/stdc++.h>

using namespace std;

int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        int l, r, c;
        cin >> l >> r >> c;

        if (l == 0 && r == 0 && c == 0)
            return 0;

        char building[l][r][c];
        int exit[l][r][c];
        tuple<int, int, int> end;
        queue<tuple<int, int, int>> Q;

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    char st;
                    cin >> st;
                    building[i][j][k] = st;

                    if (st == '#')
                    {
                        exit[i][j][k] = -1;
                    }

                    if (st == '.')
                    {
                        exit[i][j][k] = 0;
                    }

                    if (st == 'S')
                    {
                        exit[i][j][k] = 0;
                        Q.push({k, j, i});
                    }

                    if (st == 'E')
                    {
                        exit[i][j][k] = 0;
                        end = make_tuple(k, j, i);
                    }
                }
            }
        }

        bool isExit = false;

        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();

            for (int i = 0; i < 6; i++)
            {
                int nx = get<0>(cur) + dx[i];
                int ny = get<1>(cur) + dy[i];
                int nz = get<2>(cur) + dz[i];

                if (nx < 0 || nx >= c || ny < 0 || ny >= r || nz < 0 || nz >= l)
                    continue;
                if (exit[nz][ny][nx] != 0)
                    continue;

                exit[nz][ny][nx] = exit[get<2>(cur)][get<1>(cur)][get<0>(cur)] + 1;

                if (nx == get<0>(end) && ny == get<1>(end) && nz == get<2>(end))
                {
                    cout << "Escaped in " << exit[nz][ny][nx] << " minute(s)."
                         << "\n";
                    isExit = true;
                    break;
                }

                Q.push({nx, ny, nz});
            }

            if (isExit)
                break;
        }

        if (!isExit)
        {
            cout << "Trapped!"
                 << "\n";
        }
    }
}