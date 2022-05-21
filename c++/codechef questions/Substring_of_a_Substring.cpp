#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        vector<int> v;
        cin >> s;
        int sl = s.length();
        if (sl <= 2)
        {
            cout << -1 << endl;
        }
        else
        {
            char start = s[0];
            char end = s[sl - 1];
            int counter = 0;
            for (int i = 1; i < sl - 1; i++)
            {
                if (s[i] == start || s[i] == end)
                {
                    v.push_back(counter);
                    counter = 0;
                    continue;
                }
                else
                    counter++;
            }
            v.push_back(counter);
            sort(v.begin(), v.end());
            int ans = v.back();
            if (ans == 0)
            {
                cout << -1 << endl;
            }
            else
                cout << ans << endl;
        }
    }
    return (0);
}