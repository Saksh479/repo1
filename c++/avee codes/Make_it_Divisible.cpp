/* #include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     long long int n;
     cin>>n;
     for(int i=pow(10,n-1); i<pow(10,n);i++)
     {
         if(i%3==0 && i%2!=0 && i%9!=0)
         {cout<<i<<endl;
         break;}

     }
     }
     return(0);
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int n;
     cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if(i==1 || i==n)
        {cout<<3;}
        else 
        {cout<<0;}
    }
    cout<<endl;
     }
    
     return(0);
}