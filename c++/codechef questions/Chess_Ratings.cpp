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
int x,y;
cin>>x>>y;
if((y-x)%8==0)
cout<<(y-x)/8<<endl;
else
cout<<((y-x)/8)+1<<endl;

}
return 0;
}