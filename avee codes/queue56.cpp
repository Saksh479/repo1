#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("5");
    q.push("6");
    int n; 
    cin>>n;
    for(n;n>0;n--)
    {
        string str;
        str=q.front();
        cout<<str<<" ";
        q.pop();
        q.push(str+"5");
        q.push(str+"6");
    }
     
     return(0);
}