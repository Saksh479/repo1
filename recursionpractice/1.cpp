#include<bits/stdc++.h>
using namespace std;
void print_num(int n)
{
    if (n==0)
    return;
    cout<<n<<" ";
    print_num(n-1);
}
void print_numto1(int n)
{
    if (n==0)
    {
        return;
    }
    print_numto1(n-1);
    cout<<n<<" ";
}
int main(){
int t;
cin>>t;
print_num(t);
cout<<endl;
print_numto1(t);

     return(0);
}