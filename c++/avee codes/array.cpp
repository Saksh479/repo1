#include<iostream>
using namespace std;
int main()
{
     float a[5];
     for(int i=0;i<5;i++)
     {
         cin>>a[i];
     }
     cout<<*a<<endl<<*(a+1)<<endl<<*(a+2);

     return(0);
}