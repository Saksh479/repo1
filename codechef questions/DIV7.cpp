#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,rem,numc;
        cin>>a;
        if(a%7==0)
        {cout<<a<<endl;
        continue;}
        numc=a/7;
        int plus=(numc+1)*7;
        int min=(numc)*7;
        if(plus/10==a/10)
        cout<<plus<<endl;
        else
        cout<<min<<endl;        
    }
     
     return(0);
}