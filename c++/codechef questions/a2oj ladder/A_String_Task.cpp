#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1;  //"A", "O", "Y", "E", "U", "I" are vowels
cin>>s1;
vector <char> v;
int j=0;
for (int i = 0; i < s1.length(); i++)
{   
    if (isupper(s1[i]))
    {
       s1[i]=(char) tolower(s1[i]);
    }
    
    if(s1[i]=='a'||s1[i]=='o'||s1[i]=='y'||s1[i]=='e'||s1[i]=='u'||s1[i]=='i')
    {
        continue;
    }
    else
    {v.push_back('.');
     v.push_back(s1[i]);}
   ;
}

for (auto x : v)
{
    cout<<x;
}

     return(0);
}