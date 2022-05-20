# include <bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll n)
{
    ll ans=1;
    ll mod=1e9+7;
    for (int i = 0; i < n; i++)
    {
        ans=(ans*2)%mod ;
    }
    return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
string str;
cin>>str;

int ctr=0;
for (int i = 0; i < n; i++)
{
    if (str[i]=='c'||str[i]=='g'||str[i]=='l'||str[i]=='r')
    {
       ctr++;
    }
    
}
cout<<power(ctr)<<endl;

}
return 0;
}