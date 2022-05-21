#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a[3][3],n;
        int sum1,sum2;
        cin>>n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cin>>a[i][j];
        }
        
    }
 
    if (sum1>=sum2)
    {
        cout<<sum1<<endl;
    }
    else
    cout<<sum2<<endl;
    
    } 
     return(0);
}