#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;
char pic[101][101];
int normal[101][101];
int rg[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> pic[i][j];
        }
    }

    int normalCnt = 0;
    int rgCnt = 0;
    char color;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (normal[i][j] > 0)
                continue;

            Q.push({i, j});
            normalCnt++;
            color = pic[i][j];
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (pic[nx][ny] != color)
                        continue;
                    if (normal[nx][ny] > 0)
                        continue;

                    normal[nx][ny] = normalCnt;
                    Q.push({nx, ny});
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rg[i][j] > 0)
                continue;

            Q.push({i, j});
            rgCnt++;
            color = pic[i][j];
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (color == 'R' || color == 'G')
                    {
                        if (pic[nx][ny] != 'R' && pic[nx][ny] != 'G')
                            continue;
                    }
                    if (color == 'B')
                    {
                        if (pic[nx][ny] != color)
                            continue;
                    }

                    if (rg[nx][ny] > 0)
                        continue;

                    rg[nx][ny] = rgCnt;
                    Q.push({nx, ny});
                }
            }
        }
    }

    cout << normalCnt << " " << rgCnt;
}