#include<iostream>
#include<cctype>
using namespace std;
int main()
{
     string str;
     cin>>str;
     for (int i = 0; i < str.length(); i++)
     {  
         char c;
         c=str[i];
         if(str[i]=='o'||str[i]=='O'||str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='I'||str[i]=='i'||str[i]=='U'||str[i]=='u'||str[i]=='Y'||str[i]=='y')
            {str.erase(i);}
            else
            {    if(isupper(c))
                    {tolower(c);}
                cout<<"."<<str[i];}
     }

     
     return(0);
}