#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter the value";
     cin>>n;
     int i=2;
     while(i<n)
     {
        if(n%i==0)
        {
            
            cout<<"not prime";
            break;
        }
        i=i+1;
     }
     if(i==n)
     cout<<"prime no";
     return 0;
}