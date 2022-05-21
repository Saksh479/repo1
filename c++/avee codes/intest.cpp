#include<iostream>
using namespace std;

int main()
{
    long int n,k,a[n];
    int c=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    cin>>a[i];
    if(a[i]%k==0)
    c++;
    }
    cout<<c;
    return 0;
}