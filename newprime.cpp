#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j=2;
    while(j<=n)
    {
       int  i=2;
        while(i<j)
        {
            if(j%i==0)
            {
               
                //cout<<j;
                break;
            }
            i=i+1;
        }
        if(i==j)
        {
            cout<<"prime",j;
        }
    j=j+1;    
    }
   return 0; 
}
