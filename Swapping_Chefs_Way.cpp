#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int size;
     int flag=0;
     cin>>size;
     string str;
     cin>>str;
     string temp;
     temp=str;
     sort(temp.begin(),temp.end());
     for (int i = 0; i < str.length(); i++)
     {
         if(str[i]!=temp[i] && str[i]!=temp[size-(1+i)])
            {
                flag=1;
                break;
            }
     }
     if(flag==1)
     {cout<<"NO"<<endl;}
     else 
     cout<<"YES"<<endl;

     }
     return(0);
}