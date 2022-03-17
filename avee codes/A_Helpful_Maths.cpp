#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1')
        one++;
        else if(s[i]=='2')
        two++;
        else if(s[i]=='3')
        three++;
    }
    
    int c=one+two+three;

   while (c)
   {
             
      if (c>1)
       {
           if(one>0)
           {cout<<1<<"+";one--;}
            else if(two>0)
            {cout<<2<<"+";
            two--;}
            else if(three>0)
            {cout<<3<<"+";
            three--;}
        }
        else
        {
            if(one>0)
           {cout<<1;
           }
            else if(two>0)
            {cout<<2;
            }
            else if(three>0)
            {cout<<3;
            }
        }
        c--;
  
       
   }
   
    
    return(0);
}