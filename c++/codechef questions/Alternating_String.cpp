#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     string str;
     int count;
     cin>>count;
     cin>>str;
     int one=0,zero=0;
     for (int i = 0; i < count; i++)
     {
         if (str[i]=='0')
         {
             zero++;
         }
         else 
         one++;
     }
     if(one==0||zero==0)
     {cout<<1<<endl;}
     else if(one==zero)
     {cout<<count<<endl;}
     else 
     cout<<(min(one,zero)*2)+1<<endl;
     }
     return(0);
}