#include<bits/stdc++.h>
using namespace std;
int main()
     {
         float bal;
         int x;
         cin>>x>>bal;
         if(x%5==0 && x+0.50<=bal)
         {
             cout<<fixed<<setprecision(2)<<bal-(x+0.50);
         }
         else 
         {cout<<setprecision(2)<<bal;}

     
     
     return(0);
     }   