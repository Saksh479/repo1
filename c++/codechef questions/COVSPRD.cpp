#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int d, n, inf;
        cin >> n >> d;
        if (d > 23)
        {
            cout << n;
        }
        else if (d <= 10)
        {
            inf = pow(2, d);
            if (inf < n)
            {
                cout << inf << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
        else
        {
            inf = pow(2, 10) * pow(3, d - 10);
            if (inf < n)
            {
                cout << inf << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
    }
    return (0);
}