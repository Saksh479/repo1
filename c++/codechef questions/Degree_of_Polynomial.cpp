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
    int count;
    cin>>count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    for (int i = count-1; i >= 0; i--)
    {
        if (a[i]!=0)
        {
            cout<<i<<endl;;
            break;
        }
    }
    
}
return 0;
}