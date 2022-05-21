#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
if(t%2==0)
{
cout<<t/2<<" "<<0<<endl;
cout<<0<<" "<<-t/2<<endl;
cout<<0<<" "<<t/2<<endl;
cout<<-t/2<<" "<<0<<endl;
}
else
cout<<-1;

     return(0);
}