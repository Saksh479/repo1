#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     
     int n;
     int str[n];
     cin>>n;
     int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    string xo;
    for (int i = 0; i < n; i++)
    {
        if(str[i]==str[n+1-i])
        {}
    }
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if(xo[0]!=xo[i])
        {k++;}
    }
    if(n%2==1)
    {cout<<"yes"<<endl;}
    else if(k%2==0)
    {cout<<"yes"<<endl;}
    else
    {
        cout<<"no"<<endl;
    }
     }
     return(0);
}