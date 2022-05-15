# include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {

int t;
cin>>t;
while(t--)
{
 int n;
    cin>>n;
    int a[n];
   
    vector <int> uni ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    /* for (int i=0; i<n; i++)
    {
       while (i < n-1 && a[i] == a[i+1])
        {i++;}
       uni.push_back(a[i]);
    }
     int x=uni.size();
     vector <int> occ;
     int ctr=0;
     int k=0;
     for (int i = 0; i < n; i++)
     {
         if(uni[k]==a[i])
         {
             ctr++;
         }
         else
         {
             occ.push_back(ctr);
             k++;
             ctr=1;
         }
     }
     occ.push_back(ctr);
     */ 
    unordered_map<int, int> mp;
    vector <int> mn;
    for (int i = 0; i < n; i++)
        {mp[a[i]]++;}
    for (auto k : mp)
        {mn.push_back(k.first + k.second -1);}
     
     /*for (int i = 0; i < x; i++)
     {
         mn.push_back(uni[i]+occ[i]-1);
     }*/
     sort(mn.begin(),mn.end(),greater<int>());
     if (mn[0]>a[n-1])
     {
         cout<<mn[0]<<endl;
     }
     else
     cout<<a[n-1]<<endl;
}
return (0);
}