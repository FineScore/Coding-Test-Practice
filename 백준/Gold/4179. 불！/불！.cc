#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char maze[1000][1000];
int jihoon[1000][1000];
int fire[1000][1000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    queue<pair<int, int>> JQ;
    queue<pair<int, int>> FQ;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char s;
            cin >> s;
            maze[i][j] = s;

            jihoon[i][j] = -1;
            fire[i][j] = -1;

            if (s == 'J')
            {
                JQ.push({i, j});
                jihoon[i][j] = 0;
            }

            if (s == 'F')
            {
                FQ.push({i, j});
                fire[i][j] = 0;
            }
        }
    }

    while (!FQ.empty())
    {
        auto cur = FQ.front();
        FQ.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                continue;
            if (fire[nx][ny] >= 0 || maze[nx][ny] == '#')
                continue;

            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            FQ.push({nx, ny});
        }
    }

    while (!JQ.empty())
    {
        auto cur = JQ.front();
        JQ.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            {
                cout << jihoon[cur.X][cur.Y] + 1;
                return 0;
            }
            if (jihoon[nx][ny] >= 0 || maze[nx][ny] == '#')
                continue;
            if (fire[nx][ny] != -1 && fire[nx][ny] <= jihoon[cur.X][cur.Y] + 1)
                continue;

            jihoon[nx][ny] = jihoon[cur.X][cur.Y] + 1;
            JQ.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";
}