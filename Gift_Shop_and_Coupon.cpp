#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int n,k;
     cin>>n>>k;
     int a[n];
     for (int i = 0; i < n; i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     int sum=0;
     int gifts=n;
     for (int i = 1; i <= n; i++)
     {
         sum+=a[i-1];
         if(sum>k)
         {
             if(sum-(a[i-1]/2)>k)
             {
                 gifts=i-1;
             }
            else 
            {gifts=i;}
            break;       
         }


     
     }

     cout<<gifts<<endl;
     
     }
     return(0);
}