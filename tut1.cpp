#include<iostream>
using namespace std;
/*ez 
shit*/
int n=65;
int main()
{
   int n=5; //local variable is given preference
    float a=7.23;   //low precision decimal
    double b=6.77789;   //high precision decimal
    bool c=true; //true or false 
    cout<<"a    ="<<a<<"\nb    ="<<b<<endl;       //output

   cout<<n<<"bool   "<<c;
    return 0;
}