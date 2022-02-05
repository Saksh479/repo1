#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
     {
       int n;
       cin>>n;
       float m= pow(0.143*n,n);
       cout<<round(m)<<endl;
     }
     return(0);
}