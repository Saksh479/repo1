#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while(n--)
         {
            int x,y,z;
            cin>>x>>y>>z;
            cout<<x*(z-y)<<endl;
         }
     
     return(0);
}