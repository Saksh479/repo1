#include<iostream>
using namespace std;
int main()
{
       int t[20],n,sum,temp=1,i;
     cin>>n;
     for (i = 0; i < n; i++)
          {
               cin>>t[i];
          }    
     for ( i = 0; i < n; i++)
     {
          sum=0;
          while (t[i] !=0)
               {
                
                
                sum+=t[i]%10;
                t[i]=t[i]/10;
               
                }
          cout<<sum<<endl;
          
     }
      return(0);
}