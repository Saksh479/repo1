#include<bits/stdc++.h>
using namespace std;
int main(){
set <int> s;//duplicates not allowed
s.insert(3);//insertion(time comp =log(n))
auto it=s.begin();//smallest value
cout<<*it;
auto gr=s.rbegin();//reverse begin gives the largest value
s.erase(4);//erases 4 t.c=log(n)
//if 4 not present --> run time error 
//set <string> nig;
multiset <int> m;//duplicate values allowed
//m={1,1,1,1,2,3,4,5,6}
//m.erase(1) would remove all the occurrences of 1 

     return(0);
}