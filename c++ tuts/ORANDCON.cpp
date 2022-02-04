#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
     {
         int x;
         cin>>x;
         int a,b,c;
         x=(a&c)|b;
         cout<<a<<" "<<b<<" "<<c<<endl;
     }
     return(0);
}