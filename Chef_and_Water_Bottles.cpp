#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
     {
     int n,x,k;
    cin>>n>>x>>k;
    int c=k/(x);
    if(c>n)
    {cout<<n<<endl;}
    else 
    cout<<c<<endl;
     }
     return(0);
}