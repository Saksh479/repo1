#include<bits/stdc++.h>
using namespace std;
vector<int> getsmall(int arr[],int size,int no )
{
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<no)
        { ans.push_back(arr[i]);}
       
    }
    return ans;
}
int main(){
int t[]={50,40,60,100,120,20,10};
vector<int> ans=getsmall(t,7,50);
for(auto x: ans)
{
    cout<<x<<" ";
} 

     return(0);
}