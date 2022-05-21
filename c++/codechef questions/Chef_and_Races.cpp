#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int a[4],win=2;
     for (int i = 0; i < 4; i++)
     {
         cin>>a[i];
     }
     if(a[0]==a[2]||a[0]==a[3])
     {
         win--;
     }
     if(a[1]==a[2]||a[1]==a[3])
     {win--;}
     cout<<win<<endl;
     }
     return(0);
}