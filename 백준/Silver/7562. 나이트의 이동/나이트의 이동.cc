#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int length;
        cin >> length;

        int chess[length][length];

        fill(chess[0], chess[length], 0);

        int cx, cy;
        cin >> cx >> cy;

        int tx, ty;
        cin >> tx >> ty;

        queue<pair<int, int>> Q;
        Q.push({cx, cy});
        chess[cx][cy] = 0;

        int answer = 0;
        while (!Q.empty())
        {
            auto cur = Q.front();
            if (cur.X == tx && cur.Y == ty)
            {
                answer = chess[cur.X][cur.Y];
                break;
            }

            Q.pop();

            for (int j = 0; j < 8; j++)
            {
                int nx = cur.X + dx[j];
                int ny = cur.Y + dy[j];

                if (nx < 0 || nx >= length || ny < 0 || ny >= length)
                    continue;
                if (chess[nx][ny] > 0)
                    continue;

                chess[nx][ny] = chess[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
            }
        }

        cout << answer << "\n";
    }
}