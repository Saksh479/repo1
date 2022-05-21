#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
     int n,x;
     cin>>n;
     cin>>x;
     int a[n];
     int temp;
     int sum=0;
     for (int i = 0; i < n; i++)
     {
      cin>>a[i];
     }
     sort(a,a+n);
     int counter=0;
     int i=n-1;
     while (i>=0)
     {
         sum+=a[i];
         counter++;
         if (sum>=x)
         {
            cout<<counter<<endl;
            break;
         }
         i--;
     }
     if(sum<x)
     {cout<<"-1"<<endl;}

     

     
}    
     return(0);
}