#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while(n--)
     {
        int p;
        cin>>p;
        if (p<=2)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<(p/2)+1<<endl;
        }
     }
     return(0);
}