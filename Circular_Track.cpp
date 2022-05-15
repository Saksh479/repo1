# include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int a,b,m;
cin>>a>>b>>m;
if (a>b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}

if (b-a>m/2)
{
    cout<<(m+a)-b<<endl;
}
else
cout<<b-a<<endl;

}
return 0;
}