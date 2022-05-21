#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int size;
     string s;
     cin>>size>>s;
     int flag = 0;
     for (int i = 0; i < size; i++)
     {
         if (s[i]=='5'||s[i]=='0')
         {
             cout<<"Yes"<<endl;
             flag=1;
             break;
         }
         
     }
     if(flag==0)
     {cout<<"No"<<endl;}
     }
     return(0);
}