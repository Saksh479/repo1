#include<iostream>
using namespace std;
int main()
{
     int num,input[100],i;
     cin>>num;
     for ( i = 0; i < num; i++)
     {  
    
         cin>>input[i];
       
     }
     for ( i = 0; i < num; i++)
     {
         int j=1;
         if (input[i]==0)
         {
             cout<<"1"<<;
         }
         else
         {
           while (input[i]!=0)
         {
            j*=input[i]--;
         }
         cout<<j<<endl;
        }
     }
     
     
     return(0);
}