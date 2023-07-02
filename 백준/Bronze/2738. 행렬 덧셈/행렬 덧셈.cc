#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix;
    for (size_t i = 0; i < n; i++)
    {
        vector<int> inner;

        for (size_t j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            inner.push_back(num);
        }

        matrix.push_back(inner);
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            matrix[i][j] += num;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        ostringstream oss;

        for (size_t j = 0; j < m; j++)
        {
            oss << matrix[i][j] << " ";
        }

        cout << oss.str() << endl;
    }

    return 0;
}