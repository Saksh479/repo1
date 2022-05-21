#include<iostream>
using namespace std;
/*inline int product(int a, int b) less time consuming way when one line code
{
    return (a*b);
}*/
//do not use static and inline functions together
 int product(int a, int b)
{//use inline code to save time 
    static int c=0;//this executes only once 
    c=c+1; //next time this fn is run, the value of c will be retained
    return (a*b)+c;
}
//default arguments
float paisadouble(int mula, float factor=2.1)//float factor is a default argument
//always written after compulsory argument (mula)
{
return mula*factor;
}
int main()
{
    int x,y;
    
    cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y)<<endl;
    int mula;
    cout<<"enter money";
    cin>>mula;
    cout<<"money after paisa double"<<paisadouble(mula);
   /* cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y); 
    cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y); 
    cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y); 
    cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y); 
    cout<<"enter numbers"<<endl;
    cin>>x>> y;
    cout<<endl<<product(x,y);*/
    return(0);
}