#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1=1,t2=1,t,n;
    cin>>n;
    cout<<t1<<" "<<t2<<" ";

    for(int i=3;i<=n;i++)
    {
        t=t1+t2;
        t2=t1;
        t1=t;
        cout<<t<<" ";
    } 
    return 0;
}