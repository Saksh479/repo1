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
unsigned int n;
cin>>n;
unsigned int a[n];
unsigned int o=0;
int x;
for (int i = 0; i < n; i++)
{
    
    cin>>a[i];
     o|=a[i];
}


int res=0;
while (o>0)
{
    o=o&(o-1);
    res++;
}
cout<<res<<endl;
}
return 0;
}