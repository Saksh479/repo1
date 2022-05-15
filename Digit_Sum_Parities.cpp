#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     long long n;
     cin>>n;
     if(n%10==9)
     {  
         int d=n+1;
         int temp;
         int k=0;
         while(d)
         {
             temp=(d)%10;
             if(temp==0)
             {
                 k++;
                 d/=10;
                 continue;
             }
             else
             {break;}
         }
         if(k%2==0)
         {
             cout<<n+1<<endl;
         } 
         else
         cout<<n+2<<endl;
     }
     else
     cout<<n+1<<endl;
     }
     return(0);
}
