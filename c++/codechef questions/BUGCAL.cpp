#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int a,b,ans=0;
    cin>>a>>b;
    int m=max(a,b);
    int i=0;
    while (m)
    {
    
       int temp=(a%10+b%10)%10;
        ans+=pow(10,i)*temp;
        i++;
        a/=10;
        b/=10;
        m/=10;
    }
    cout<<ans<<endl;
}

     return(0);
}