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
int n;
cin>>n;
int a[n];
int ctr=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if (i>0)
    {
        if (a[i]==a[i-1])
        {
            ctr++;
        }   
    }    
}
cout<<n-ctr<<endl;


}
return 0;
}