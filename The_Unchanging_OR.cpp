#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int count;
     cin>>count;
     int n=0;
     int i;
     for ( i = 1; i < count; i*=2)
     {
         n++;
     }
     if (i==count)
     {
         /* code */
         cout<<count-n-1<<endl;
     }
     else
    { int m=count-i/2;
     cout<<i/2-n+m<<endl;}
     }
     return(0);
}