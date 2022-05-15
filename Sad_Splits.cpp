#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
     int n;
     cin>>n;
     vector <int> dig;
     int num=0;
     for (int i = n; i >0; i/=10)
     {
         dig.push_back(n%10);
         n/=10;
         num++;
    }

    if(num==2)
    {
        if ((dig[0]+dig[1])%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
    else
    {
    int even=0,odd=0,zero=0;
    for(auto x:dig)
    {
        if(dig[x]==0)
        {zero++;}
        else if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    } 
    if(zero>0&&even>0)
    {
        cout<<"YES"<<endl;
    }
    else if(even+zero>1||odd>1)
    { cout<<"YES"<<endl;}
    else
    cout<<"NO"<<endl;
    }
     }

     return(0);
}
/*# include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
    string str;
    cin>>str;
    int x = (str[str.size()-1]-'0')%2;
       bool rem=0;
        for (int i = 0; i < str.size()-1; i++)
        {
            if((str[i]-'0')%2==x)
            {
                rem=1;
                break;
            }
        }
        if(rem)
        {cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    
}

return 0;
}*/