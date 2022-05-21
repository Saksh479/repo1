#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int x,y;
     cin>>x>>y;
     int free=x/3;
     cout<<(x-free)*y<<endl;
     }
     return(0);
}