#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int n;
     cin>>n;
     int c[n],d[n];
     for (int i = 0; i < n; i++)
     {
         cin>>c[i];
     }
     int count=0;
     for (int i = 0; i < n; i++)
     {
         cin>>d[i];
        if(d[i]==c[i])
        {
            count++;
        }
        
     }
     cout<<count<<endl;
     
     
     }
     return(0);
}