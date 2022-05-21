#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a[]={100,90,69};
int b[]={90,80,69};
vector<pair<int,int>> v;
for (int i = 0; i < 3; i++)
{
    v.push_back({b[i],a[i]});
}
sort(v.begin(),v.end(),greater<pair<int,int>>());// greater helps in sorting in descending order 
for (int i=0;i<3;i++)
{
    cout<<v[i].second<<" "<<v[i].first<<endl;
}

     return(0);
}