#include<iostream>
using namespace std;

int main()
{
     int a[200],m,num,i=0,facnum;
    cin>>m;
    facnum=m;
    while (m>0)
    {
        num=m%10;
        m/=10;
        a[i]=num;
        i++;
    }
        
    int k=0,pro,temp=0;
    while (facnum>0)
    {   
        facnum--;
         do
            {
                pro=a[k]*facnum+temp;
                a[k]=pro%10;
                k++;
                temp=pro/10;
             } while (temp!=0);
    }
    for ( int j = k-1; j>=0 ; j--)
    {
        cout<<a[j];
        
    }
    return(0);
}