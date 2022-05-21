#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int one=0,zero=0;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0')
            {zero++;}
            else
            {one++;} 
        }
        if(zero==one)
        {cout<<zero-1<<endl;}
        else if(zero>one)
        {cout<<one<<endl;}
        else
        {cout<<zero<<endl;}
        
    } 
     return(0);
}