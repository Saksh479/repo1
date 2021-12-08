#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;

     for (int i = 2; i <= n; i++)
     {
            t=0;
        for (int j = 2; j <=i/2; j++)
        {
            int c=i%j;

            if(c==0)
                {
                    t=1;
                }
        }
        if (t==0)
        {
            cout<<i<<endl;   
        }
    }
     
     return(0);
}