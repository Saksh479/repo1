#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int a,b,c,d,x,y;
     cin>>a>>b>>c>>d;
     if (a>c)
     {
         x=a-c;
     }
     else
     {
         x=c-a;
     }
     if (b>d)
     {
        y=b-d;
    
     }
    else
    y=d-b;

    if (y>x)
    {
        cout<<y<<endl;
    }
     else
     cout<<x<<endl;
     
     
     }
     return(0);
}