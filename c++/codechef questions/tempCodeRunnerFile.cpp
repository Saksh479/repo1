#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while(n--)
     {
          int r1,r2,t1,t2;
          cin>>t1>>t2>>r1>>r2;
          if((pow(t1,2)/pow(r1,3))==(pow(t2,2)/pow(r2,3)))
          {cout<<"yes";}
          else
          {cout<<"no";}
     }     
     return(0);
}