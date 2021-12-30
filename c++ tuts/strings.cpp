#include<iostream>
using namespace std;
int main(){
     
   /*string str,str1;     //declaration
     cin>>str;      // will input a string without spaces
     getline(cin,str1); //will enter string with spaces
     cout<<endl<<str;
     cout<<endl<<str1<<endl;
     string str3="nigg",str4="er";
     cout<<"str3="<<str3<<endl;
     cout<<"str4="<<str4<<endl;
     cout<<str3+str4<<endl;
    str3.append(str4);// append (to join) str4 to str3
    cout<<str3;
    str3.clear();//erases the string/makes it empty*/
    string s1="xbc",s2="420";
    cout<< s2.compare(s1);// s2=s1==0 s1>s2==-1  s1<s2==1
    s1.erase(0,2);//(a,b) a=index from where we want to start erasing b=no of chars we want to delete
    cout<<endl<<s1;
    s1="nigger banda";
    cout<<endl<<"position of ger="<<s1.find("ger");
    cout<<"\nsize="<<s1.length();//can use s.size() or s.length()
    int x=stoi(s2);
    cout<<endl<<x+2;
    string s3= to_string(x);
    cout<<endl<<s3+"2";
    return(0);
}