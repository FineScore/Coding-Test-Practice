#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int w, h;
        cin >> w >> h;

        int sg[h][w];
        int fire[h][w];
        char building[h][w];

        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                sg[j][k] = -1;
                fire[j][k] = -1;
            }
        }

        queue<pair<int, int>> SQ;
        queue<pair<int, int>> FQ;

        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                char temp;
                cin >> temp;

                building[j][k] = temp;

                if (temp == '*')
                {
                    FQ.push({j, k});
                    fire[j][k] = 0;
                }

                if (temp == '@')
                {
                    SQ.push({j, k});
                    fire[j][k] = 0;
                    sg[j][k] = 0;
                }

                if (temp == '.')
                {
                    fire[j][k] = 0;
                    sg[j][k] = 0;
                }
            }
        }

        while (!FQ.empty())
        {
            auto cur = FQ.front();
            FQ.pop();

            for (int j = 0; j < 4; j++)
            {
                int nx = cur.Y + dx[j];
                int ny = cur.X + dy[j];

                if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                    continue;
                if (fire[ny][nx] != 0)
                    continue;
                if (fire[ny][nx] == 0 && building[ny][nx] == '*')
                    continue;

                fire[ny][nx] = fire[cur.X][cur.Y] + 1;
                FQ.push({ny, nx});
            }
        }

        int answer = -1;

        while (!SQ.empty())
        {
            auto cur = SQ.front();
            SQ.pop();

            for (int j = 0; j < 4; j++)
            {
                int nx = cur.Y + dx[j];
                int ny = cur.X + dy[j];

                if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                {
                    if (fire[cur.X][cur.Y] >= sg[cur.X][cur.Y] + 1 || fire[cur.X][cur.Y] == 0)
                    {
                        answer = sg[cur.X][cur.Y] + 1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                if (sg[ny][nx] != 0)
                    continue;
                if (sg[ny][nx] == 0 && building[ny][nx] == '@')
                    continue;

                sg[ny][nx] = sg[cur.X][cur.Y] + 1;
                SQ.push({ny, nx});
            }

            if (answer != -1)
                break;
        }

        if (answer == -1)
        {
            cout << "IMPOSSIBLE"
                 << "\n";
        }
        else
        {
            cout << answer << "\n";
        }
    }
}