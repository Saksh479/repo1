#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int n,temp=0;
     string bi;
     cin>>n>>bi;
     
     for (int i = 0; i < bi.length(); i++)
     {
         if(bi[i]=='1')
         {
            temp=i;
            break;
         }
     }
     int num=bi.length()-temp;
     if(temp==0)
     {cout<<bi[0]<<endl;}
     if(num==1)
     {
         cout<<"1"<<endl;
     }
     else
     cout<<3*pow(2,num-2)<<endl;
     }
     return(0);
}