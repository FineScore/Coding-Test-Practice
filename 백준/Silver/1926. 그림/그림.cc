#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board[500][500];
bool vis[500][500];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int pic = 0;
int area = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int tx;
            cin >> tx;
            board[i][j] = tx;
        }
    }

    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && board[i][j] == 1)
            {
                pic++;
                int nowArea = 0;
                vis[i][j] = 1;
                Q.push({i, j});
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    nowArea++;
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                            continue;

                        if (vis[nx][ny] || board[nx][ny] != 1)
                            continue;

                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }

                if (area < nowArea)
                {
                    area = nowArea;
                }
            }
        }
    }

    cout << pic << "\n";
    cout << area;
}