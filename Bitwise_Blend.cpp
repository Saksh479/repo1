#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
     {
        int n;
        cin>>n;
        int arr[n];
        int odd1=-1;
        int odd2=-1;
        vector<int> faul1;
        vector<int> faul2;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(i%2==arr[i]%2)
            {
                faul2.push_back(i+1);
                if(i%2)
                {odd1=i+1;}
            }
            else{
                faul1.push_back(i+1);
                if(i%2==0)
                {
                    odd2=i+1;
                }
            }
            
        }

        if(faul2.size()<faul1.size()&&odd2!=-1)
        {   
            cout<<faul2.size()<<endl;
            for (int i = 0; i < faul2.size(); i++)
            {
                cout<<faul2[i]<<" "<<odd2<<endl;
            }
            
        }
        else if(odd1!=-1)
        {  
             cout<<faul1.size()<<endl;
            for (int i = 0; i < faul1.size(); i++)
            {
                cout<<faul1[i]<<" "<<odd1<<endl;
            }
            
        }
        else{cout<<-1<<endl;}
     }
     return(0);
}