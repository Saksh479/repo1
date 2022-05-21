#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int n=str.length();
        if(str.length()>10)
        {cout<<str[0]<<(n-2)<<str[n-1]<<endl;}
        else
        {cout<<str<<endl;} 
    }
     return(0);
}