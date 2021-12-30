#include<iostream>
using namespace std;
typedef struct employee
{
    int empid;
    int salary;
    int age;

}ep;

int main()
{
     ep e1;
     cout<<"Enter id:   ";
     cin>>e1.empid;
     cout<<"enter salary    :";
     cin>>e1.salary;
     cout<<endl<<e1.empid;
      return(0);

}