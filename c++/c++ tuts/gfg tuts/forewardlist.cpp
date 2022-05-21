#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list <int> l1={10,20,30,40,50};
for(auto x: l1)
{cout<<x<<" ";}
cout<<endl;
l1.push_front(69);
l1.push_front(420);
for(auto x: l1)
{cout<<x<<" ";}
l1.pop_front();
cout<<endl;
for(auto x: l1)
{cout<<x<<" ";}
forward_list <int> l2 ={10,16,17,69,420,10};
l1.assign(l2.begin(),l2.end());
cout<<endl;
for(auto x: l1)
{cout<<x<<" ";}
l1.remove(10);  //removes all the occurrences of 10 
cout<<endl;
for(auto x: l1)
{cout<<x<<" ";}
     return(0);
}