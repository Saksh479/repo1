# include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
string bi;
int count;
cin>>count;
cin>>bi;
float ctr=0;
int end=count,start=0;
while(start<end)
{
    if(bi[start]!=bi[end-1])
    {
        ctr++;
    }
    end--;
    start++;
}

cout<<ceil(ctr/2)<<endl;
}
return 0;
}