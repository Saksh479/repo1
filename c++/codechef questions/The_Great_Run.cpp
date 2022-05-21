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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int bitches=0,max=0;
    for (int i = 0; i < k; i++)
    {
        max+=a[i];
    }
    for (int i = 0; i < n; i++)
    {    bitches=0;
        for (int j = 0; j <k ; j++)
        {bitches+=a[i+j];}
         if (max<=bitches)
            {max=bitches;}    
    }
    cout<<max<<endl;

}
return 0;
}