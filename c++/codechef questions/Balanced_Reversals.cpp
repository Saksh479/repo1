#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     string bi;
     int count1=0,count0=0;
     int size;
     cin>>size;
     cin>>bi; 
     for (int i = 0; i < bi.length(); i++)
     {
         if (bi[i]=='0')
         {
             count0++;
         }
         else
         {count1++;}
     }
     while(count0+count1>0)
     {
         if(count0>0)
         {
         cout<<0;
         count0--;
         }
         else
         {cout<<1;count1--;}
     }
     cout<<endl;
     }
     return(0);
}