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
vector <int> a;
int n,y;
cin>>n;
for (int i = 0; i < 4; i++)
{
    cin>>y;
    a.push_back(y);
}
cout<<*max_element(a.begin(), a.end())<<endl;

}
return 0;
}