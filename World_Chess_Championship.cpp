#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int x,c=0,d=0,n=0;
     string str;
     cin>>x>>str;
     int size=str.length();
     for (int i = 0; i < size; i++)
     {
        if (str[i]=='C')
        {
            c++;
        }
        else if(str[i]=='N')
        {
            n++;
        }
        else
        {
            d++;
        }
     }
     int carl=(c*2)+d;
    int chef=(n*2)+d;
    if(carl>chef)
    {cout<<60*x<<endl;}
    else if(chef>carl)
    {cout<<40*x<<endl;}
    else
    {cout<<55*x<<endl;}
    }
     return(0);
}