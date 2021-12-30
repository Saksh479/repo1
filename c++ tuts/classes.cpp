#include<iostream>
using namespace std;
/*typedef class expenses
{
 int travel,food;
 public:
 int leave;
 void totalexpenses();
 void setdata(int t, int f, int l)
 {
     travel= t;
     food= f; 
     leave= l;
 }

}exp;*/
class expenses  
{
 int travel,food;
 public:
 int leave;
 void totalexpenses();
 void setdata(int t, int f, int l)
 {
     travel= t;
     food= f; 
     leave= l;
     totalexpenses();  //nesting (we donot have to use sak.totalexpenses)
 }

}sak,sar,lak;  //we can declare objects along with class objects along with class declaration like this(cant be done in structures)
void expenses::totalexpenses()
{
    cout<<"total expenses ="<<(travel+food-leave)<<endl;
}

int main()

{ 
    //sak.travel/food=25 doesnt make sense because travel and food are private 
    // sak.leave=5; however can be used as it is public
     sak.setdata(21,7,4);
     //sak.totalexpenses();
     sar.setdata(21,7,4);
     //sar.totalexpenses();
     lak.setdata(25,0,1);
     //lak.totalexpenses();

     return(0);
}