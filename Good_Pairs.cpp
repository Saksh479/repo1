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
int n;cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
cin>>b[i];
}
map <pair<int,int>,int> mp;
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=mp[{a[i],b[i]}];
    mp[{b[i],a[i]}]++;
}
cout<<sum<<endl;

}
return 0;
}