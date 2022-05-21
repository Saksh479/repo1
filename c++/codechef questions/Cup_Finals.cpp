#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int x,y,d;
     cin>>x>>y>>d;
     if(sqrt((x-y)*(x-y))<=d)
     {cout<<"YES"<<endl;}
     else 
     cout<<"NO"<<endl;
     }
     return(0);
}