#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int area[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    set<int> hSet;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int h;
            cin >> h;
            area[i][j] = h;
            hSet.insert(h);
        }
    }

    queue<pair<int, int>> Q;
    int check[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            check[i][j] = 0;
        }
    }

    int answer = 1;
    for (auto s = hSet.begin(); s != hSet.end(); s++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (area[i][j] == *s)
                {
                    check[i][j] = -1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (check[i][j] == 0)
                {
                    Q.push({j, i});
                    check[i][j] = ++cnt;

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
                            if (check[ny][nx] != 0)
                                continue;

                            check[ny][nx] = cnt;
                            Q.push({nx, ny});
                        }
                    }
                }
            }
        }

        answer = max(answer, cnt);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (check[i][j] > -1)
                {
                    check[i][j] = 0;
                }
            }
        }
    }

    cout << answer;
}