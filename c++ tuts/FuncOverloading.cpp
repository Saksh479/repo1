// func overloading means two or more funtions with same names but different work due to differnt arguments 
#include<iostream>
using namespace std;
int add(int a , int b , int c)
{
    return a+b+c;
}
int add(int a, int b)
{
    return a+b;
}
int main(){
    cout<<"sum of 3 digits"<<add(3,4,5)<<endl;
    cout<<"sum of 2 digits"<<add(4,5)<<endl; 
     return(0);
}