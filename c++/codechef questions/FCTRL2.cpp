#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while(n)   
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
        int index=i;

        int k , pro;
        while (facnum > 1)
        {
            
            int temp = 0;
            facnum--;
              for (k = 0; k < index; k++)
             {
            pro=a[k]*facnum+temp;
            a[k]=pro%10;
            temp=pro/10;
            }
            while(temp)
            {
                a[k]=temp%10;
                temp/=10;
                k++;
            }
            index=k;
        }
        for (int j = k-1; j >= 0; j--)
        {
            cout << a[j];
        }
        cout<<endl;
        n--;
     }
     return(0);
}
     
