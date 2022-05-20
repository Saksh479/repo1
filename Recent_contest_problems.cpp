# include <bits/stdc++.h>
#define ll long long
using namespace std;int main() {ios_base::sync_with_stdio(false);cin.tie(NULL);int t;cin>>t;while(t--){int n;cin>>n;int s=0,l=0;for (int i = 0; i < n; i++){string x;cin>>x;if (x[0]=='S'){s++;}else{l++;}}
cout<<s<<" "<<l<<endl;}return 0;}