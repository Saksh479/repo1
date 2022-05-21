#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
     {
         int a,b,c,p,q,r;
         cin>>a>>b>>c>>p>>q>>r;
        int A=p-a;
        int B=q-b;
        int C=r-c;
        int k=max(A,B);
        int m=max(k,C);
         
         if (float((p+q+r)/2)a<+b+c+m)
         {
             cout<<"Yes"<<endl;
         }
         else
         {cout<<"No"<<endl;}

              
    }
     
     return(0);
}