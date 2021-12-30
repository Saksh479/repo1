#include<iostream>
using namespace std;
/*int factorial(int n)
{

    if (n<=1)       //condition to end
    {
    return 1;
    }
    return n*factorial(n-1);
}*/
int fibonacci(int n)
{
    if (n<2)
    {
        return 1;
    }
 return fibonacci(n-1)+fibonacci(n-2);   
}
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n; 
    cout<<fibonacci(n);

     return(0);
}