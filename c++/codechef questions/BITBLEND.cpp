#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
     {
         int n,c1=0,c2;
         bool t1=0,t2=0;
         int index1,index2;
         cin>>n;
         int a[n],w1[n],w2[n];
         int c,d;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int var1=0;
        int var2=0;
        for (int i = 0; i <n ; i++)
        {
            if ((i+1)%2 != a[i]%2)
            {
                c1++;
                w1[var1]=i+1;
                var1++;

            }
            c2=n-c1;
            if ((i)%2 != (a[i]+1)%2)
            {
                w2[var2]=i+1;
                var2++;

            }
        }
        
        for (int i = 0; i < n; i+=2)
        {
            if ((i+1)%2==a[i]%2)
            {
                t1=1;
                index1=i+1;
                

            }
            else if (i%2==(a[i]+1)%2)
            {
               t2=1;
               index2=i+1;
            }
            
        }
        if(t1==0 & t2==0 )
        {cout<<"-1"<<endl;}
        else if( t1==1 && t2==0)
        {
            cout<<var1<<endl;
            for (int i = 0; i < var1; i++)
            {
                cout<<w1[i]<<" "<<index1;
            }
            
        }
         else if( t1==0 && t2==1)
        {
            cout<<var2<<endl;
            for (int i = 0; i < var2; i++)
            {
                cout<<w2[i]<<" "<<index2;
            }
            
        }
        else
        {
                if(var1>var2)
                {
                     cout<<var2<<endl;
                    for (int i = 0; i < var2; i++)
                    {
                        cout<<w2[i]<<" "<<index2;
                    }
                }
                else if(var2>var1)
                {
                    cout<<var1<<endl;
            for (int i = 0; i < var1; i++)
            {
                cout<<w1[i]<<" "<<index1;
            }
                }

        }
        
     
         
    }
     return(0);
}