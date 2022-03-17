#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0;
        char c;
        string s;
        cin >> s;
        cin >> c;
        int d = s.length();

        for (int i = 1; i <= d; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                cout << "YES" << endl;
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            cout << "NO" << endl;
        }
    }
    return (0);
}