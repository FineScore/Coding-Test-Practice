#include <iostream>
#include <array>
using namespace std;

array<int, 2> recursion(array<int, 2> result, string &s, int l, int r)
{
    if (l >= r)
    {
        result[1]++;
        result[0] = 1;
        return result;
    }
    else if (s[l] != s[r])
    {
        result[1]++;
        result[0] = 0;
        return result;
    }
    else
    {
        result[1]++;
        return recursion(result, s, l + 1, r - 1);
    }
}

array<int, 2> isPalindrome(string &s)
{
    array<int, 2> result = {0, 0};
    return recursion(result, s, 0, s.size() - 1);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string voca;
        cin >> voca;
        array<int, 2> result = isPalindrome(voca);
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}