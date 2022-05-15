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
sort(a,a+t,greater<int>());
int i=0;
int temp=0;
for (; i <= t; i++)
{
     temp+=a[i];
     if(temp>sum/2)
     {break;}
}
     cout<<i+1;
     return(0);
}