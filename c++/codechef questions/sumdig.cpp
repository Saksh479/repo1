#include<iostream>
using namespace std;
int main()
{
 int a,temp,sum=0;
 cin>>a;
 while(a)
 {
     temp=a%10;
     sum+=temp;
     a/=10;
 }    
 cout<<endl<<sum;
     return(0);
}