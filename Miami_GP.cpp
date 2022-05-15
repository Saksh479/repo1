#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
         float a,b;
         cin>>a>>b;
         if (b<=1.07*a)
         {
             cout<<"YES"<<endl;
         }
         else
         cout<<"NO"<<endl;
     }
     return(0);
}