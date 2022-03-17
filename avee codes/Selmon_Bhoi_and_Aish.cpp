#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     long long n,k;
     long long a,b,nig=0;
     cin>>n>>k;
     vector<pair<float,long long>> cor;
     for (int i = 0; i < n; i++)
     {
        cin>>a>>b;
        long long sum=a*a+b*b;
        float d=sqrt(sum);
        cor.push_back({d,a+b});
    }
     sort(cor.begin(),cor.end());
     for (int i = 0; i < k; i++)
     {
         nig+=cor[i].second;
     }
     cout<<nig;
     }
     
     return(0);
}