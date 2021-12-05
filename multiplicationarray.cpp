#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases)
    {
        int a[200], m, num, i = 0, facnum;
        cin >> m;
        facnum = m;
        do
        {
            num = m % 10;
            m /= 10;
            a[i] = num;
            i++;
        } while (m);

        int k = 0, pro;
        while (facnum > 1)
        {
            int temp = 0;

            facnum--;
            do
            {
                pro = a[k] * facnum + temp;
                a[k] = pro % 10;
                k++;
                temp = pro / 10;
                i--;
            } while (i);
            while(temp)
            {
                a[k]=temp%10;
                temp/=10;
                k++;
            }
        }
        for (int j = k ; j >= 0; j--)
        {
            cout << a[j];
        }
        cases--;
    }
    return (0);
}