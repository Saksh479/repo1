#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    int a[t], b[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    sort(a, a + t);
    for (int i = 0; i < t; i++)
    {
        if (a[i] == a[i + 1] && i != t - 1)
        {
            continue;
        }
        cout << a[i] << endl;
    }

    /*  for (int i = 0; i < t; i++)
     {
        cout<<a[i]<<endl;
     }*/
    /*int temp=a[0];
     count=0;
     for (int i = 0; i < t; i++)
     {
         for (int j = i; i < t; j++,count++)
         {
            if(a[j]==temp)
            {continue;
            count--;}
        if (a[j]<temp)
           { temp=a[j];
            b[count]=temp;}
     
         }
        
     }
     for (int i = 0; i < count; i++)
     {
        cout<<b[i]<<endl;
     }*/

    return (0);
}