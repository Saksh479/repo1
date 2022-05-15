#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
         int n,x,y;
         cin>>n>>x>>y;
         int row,col,diag1=0,diag2=0;
         row=n-1;
         col=n-1;
         diag1=n-(abs(x-y))-1;
         diag2=n-(abs(y-(n-x+1)))-1;
         cout<<row+col+diag1+diag2<<endl;
     }
     return(0);
}