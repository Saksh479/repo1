#include<iostream>
using namespace std;
int main()
{
     int num,input,i;
     cin>>num;
     for ( i = 0; i < num; i++)
     {  
      int   j=1;
         cin>>input;
         while (input!=0)
         {
            j*=input--;
         }
         cout<<j<<endl;
     }
     
     return(0);
}