#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     string hid,guess,out;
     cin>>hid;
     cin>>guess;
     for (int i = 0; i < 5; i++)
     {
         if (hid[i]==guess[i])
         {
             cout<<"G";
         }
         else
         {
             cout<<'B';
         }
         
     }
cout<<endl;
     }
     return(0);
}