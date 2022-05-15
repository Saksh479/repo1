#include<bits/stdc++.h>
using namespace std;
/*int maxcuts(int n,int a ,int b, int c)
{
    if(n==0)
    return 0;
    if (n<0) 
    return -1;
    int temp=max(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c));
    int res =max(temp,maxcuts(n-c,a,b,c));
    if (res==-1)

    return (res+1);
}*/
/*int factorial(int n)
{

    if (n<=1)       //condition to end
    {
    return 1;
    }
    return n*factorial(n-1);
}*/
int fibonacci(int n)
{
    if (n<2)
    {
        return 1;
    }
 return fibonacci(n-1)+fibonacci(n-2);   
}
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n; 
    cout<<fibonacci(n);
   /* int l,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=maxcuts(n,a,b,c);
    cout<<ans;
*/
     return(0);
}