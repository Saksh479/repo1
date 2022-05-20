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
int a,b;
cin>>a>>b;
cout<<max((500-(a*2))+(1000-((a+b)*4)),((1000-(b*4))+(500-((a+b)*2))))<<endl;

}
return 0;
}