#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,sum=0;
cin>>t;

int a[t];
     for (int i = 0; i < t; i++)
     {
          cin>>a[i];
          sum+=a[i];
     }
int temp=0;
int i=1;
for (; i <= t; i++)
{
     temp+=a[i];
     if(temp>sum/2)
     {break;}
}
     cout<<i;
     return(0);
}