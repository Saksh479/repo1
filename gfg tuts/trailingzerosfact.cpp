#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
int t,ans=0;
cin>>t;
for (int i = 5; i <= t; i=i*5)
{
    ans=ans+(t/i);
}
cout<<ans<<endl;
    }
return(0);
}