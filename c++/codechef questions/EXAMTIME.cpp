#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int d[3], s[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
        }
        int sum1 = d[0] + d[1] + d[2];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }
        int sum2 = s[0] + s[1] + s[2];
        if (sum1 == sum2)
        {
            if (d[0] > s[0])
            {
                cout << "DRAGON"<<endl;
            }
            else if (d[0] < s[0])
            {
                cout << "SLOTH"<<endl;
            }
            else if (d[1] > s[1])
            {
                cout << "DRAGON"<<endl;
            }
            else if (d[1] < s[1])
            {
                cout << "SLOTH"<<endl;
            }
            else if (d[2] > s[2])
            {
                cout << "DRAGON"<<endl;
            }
            else if (d[2] < s[2])
            {
                cout << "SLOTH"<<endl;
            }
            else
            cout<<"TIE"<<endl;
        }
        else if (sum1 > sum2)
        {
            cout << "DRAGON"<<endl;
        }
        else if(sum1<sum2)
        {
            cout << "SLOTH"<<endl;
        }
    }
    return (0);
}