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

    int m, n, k;
    cin >> m >> n >> k;

    int paper[m][n];

    fill((int *)paper, (int *)(paper + m), 0);

    for (int i = 0; i < k; i++)
    {
        int fx, fy, tx, ty;
        cin >> fx >> fy >> tx >> ty;

        for (int j = fy; j < ty; j++)
        {
            for (int k = fx; k < tx; k++)
            {
                paper[j][k] = -1;
            }
        }
    }

    int area = 0;
    vector<int> dim;
    queue<pair<int, int>> Q;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            if (paper[i][j] == 0)
            {
                Q.push({j, i});
                paper[i][j] = 1;
                cnt = 1;
                area++;
            }

            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();

                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (paper[ny][nx] != 0)
                        continue;
                    paper[ny][nx] = 1;
                    Q.push({nx, ny});
                    cnt++;
                }
            }

            if (cnt > 0)
            {
                dim.push_back(cnt);
            }
        }
    }

    cout << area << "\n";

    sort(dim.begin(), dim.end());

    for (int i = 0; i < dim.size(); i++)
    {
        cout << dim[i] << " ";
    }
}