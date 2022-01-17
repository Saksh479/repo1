#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     while (n--)
     {
          float r1, r2, t1, t2;
          cin >> t1 >> t2 >> r1 >> r2;
          if(((t1*t1)/(r1*r1*r1))==((t2*t2)/(r2*r2*r2)))
          
               cout << "yes";
          
          else
          
               cout << "no";
     }
     return (0);
}