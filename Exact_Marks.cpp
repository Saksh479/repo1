#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q,m,p,n;
        cin>>q>>m;
        if(m%3==0 && m<=3*q && m>=0)
        cout<<"YES"<<endl<<m/3<<" "<<0<<" "<<q-(m/3)<<endl;
        else if(m<3*q && m>0)
        {
            p=m/3+1;
            n=p*3-m;
            if(p+n<=q)
            {cout<<"YES"<<endl<<p<<" "<<n<<" "<<q-(n+p)<<endl;}
            else 
            cout<<"NO"<<endl;
        }
        else if(m<0)
        {
            if(m<-10)
            {
                cout<<"NO"<<endl;
            }
            else 
            cout<<"YES"<<endl<<"0 "<<m<<" "<<0<<endl;
        }
    }
    return (0);
}