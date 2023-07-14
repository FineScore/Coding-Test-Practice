#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        string p;
        cin >> p;

        int n;
        cin >> n;

        string arrStr;
        cin >> arrStr;
        arrStr = arrStr.substr(1, arrStr.size() - 2);

        istringstream iss(arrStr);
        string stoken;
        deque<string> dq;

        while (getline(iss, stoken, ','))
        {
            dq.push_back(stoken);
        }

        int error = 0;
        int reverse = 0;
        for (auto c : p)
        {

            switch (c)
            {
            case 'R':
                if (reverse)
                {
                    reverse = 0;
                }
                else
                {
                    reverse = 1;
                }
                break;
            case 'D':
                if (dq.empty())
                {
                    error = 1;
                    break;
                }
                if (reverse)
                {
                    dq.pop_back();
                }
                else
                {
                    dq.pop_front();
                }

                break;
            }

            if (error)
            {
                break;
            }
        }

        if (error)
        {
            cout << "error"
                 << "\n";
        }
        else if (!reverse)
        {
            cout << "[";
            for (size_t j = 0; j < dq.size(); j++)
            {
                if (j == dq.size() - 1)
                {
                    cout << dq[j];
                    break;
                }

                cout << dq[j] << ",";
            }
            cout << "]"
                 << "\n";
        }
        else
        {
            cout << "[";
            for (int j = dq.size() - 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    cout << dq[j];
                    break;
                }

                cout << dq[j] << ",";
            }
            cout << "]"
                 << "\n";
        }
    }
}