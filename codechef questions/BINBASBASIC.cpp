#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
     {
         
         int n,k;
         cin>>n>>k;
         string str;
         cin>>str;
         int counter=0;
         for (int i = 0; i < n/2; i++)
         {
             if (str[i]!=str[n-(1+i)])
             {
                 counter++;
             }
             
         }
         if (n%2!=0)
         {
             if(counter-k==0)
             {cout<<"YES"<<endl;}
             else if(k-counter<0)
             {cout<<"NO"<<endl;}
             else if(k-counter>0)
             {cout<<"YES"<<endl;}
         }
         else
         {
             if(counter-k==0)
             {cout<<"YES"<<endl;}
             else if(k-counter<0)
             {cout<<"NO"<<endl;}
             else if(k-counter>0)
            {
                if((k-counter)%2==0)
                    {cout<<"YES"<<endl;}
                else
                cout<<"NO"<<endl;    
            }

             
             
         }
    
      }
     return(0);
}