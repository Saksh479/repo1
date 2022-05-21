#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int x;
     cin>>x;
     if(x%5)
     {
         cout<<-1<<endl;
     }
     else if(x%10==5)
     {
         cout<<(x/10)+1<<endl;
     }
     else
     {
         cout<<x/10<<endl;
     }
     }
     return(0);
}