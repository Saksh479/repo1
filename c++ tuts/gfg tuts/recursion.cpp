#include<bits/stdc++.h>
using namespace std;
/* q1 input integer
    output n,n-1,......1 */
void till_one(int n)
{
    if (n==0)
    {
        return ;
    }
    cout<<n<<" ";
    till_one(n-1);
} 
/*q2 input int 
output 1,2,3,......n*/
void till_n(int n)
{
    if(n==0)
    {return ;}
    till_n(n-1);
    cout<<n<<" ";
}
int factorial(int n)
{
    if(n==0)
    return 1;
    return n*factorial(n-1);
}
int factorial(int n,int k)          //tail recursion
{
    if (n==0)
    {
        return k;
    }
    return factorial(n-1,n*k);
}
int fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int getsum(int n)
{
    if (n==0)
    return 0;
    return n+getsum(n-1);
}
int main(){
int t;
cin>>t;
//till_one(t);
//till_n(t);
//int ans=factorial(t,1);
//cout<<ans;;
//int fib=fibonacci(t);
cout<<getsum(t);
     return(0);
}